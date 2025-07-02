using System;
using System.IO;

namespace mission_pack_unpack {

    class Program {
        static int Main() {

            /*
             * Mission Pack Unpack
             * - Initialize settings from configuration file
             * - Copy Mike Force PBO from Steam Workshop
             * - Unpack PBO using Arma 3 Tools
             * - Copy AirGoons customizations
             * - Package PBO for manual deployment to server
             * - Clean up
             */

            try {
                Configuration.InitSettings();

                string workingDir = Configuration.Settings.Working_Path;

                if (Configuration.Settings.Cleanup) {
                    CleanUp(workingDir);
                }

                string mikeForcePBO_path = CopyMikeForcePBO(workingDir);
                string customMission_path = UnpackPBO(mikeForcePBO_path);
                CustomizeMission(customMission_path);
                PackPBO(customMission_path);

                if (Configuration.Settings.Cleanup) {
                    CleanUp(workingDir);
                }

                return 0;
            }
            catch (ApplicationException ex) {
                Console.Error.WriteLine(ex.Message.ToString());
                return 1;
            }
            catch(Exception ex) {
                Console.Error.WriteLine(ex.ToString());
                return 1;
            }
        }

        static string CopyMikeForcePBO(string workingDir) {
            Console.Out.WriteLine("Copying official Mike Force PBO from Steam Workshop");

            string filename = "1799728943668364634_legacy.bin";
            string mikeforce_filepath = string.Format(
                "{0}/{1}",
                Configuration.Settings.MikeForce_Path,
                filename);

            if (!File.Exists(mikeforce_filepath)) {
                throw new ApplicationException(string.Format("Mike Force workshop file does not exist:  {0}", mikeforce_filepath));
            }

            else {
                
                string destinationPath = string.Format("{0}/{1}", workingDir, "official_mikeforce_latest.cam_lao_nam.pbo");
                Directory.CreateDirectory(workingDir);
                File.Copy(mikeforce_filepath, destinationPath, true);

                return destinationPath;
            }
        }

        static string UnpackPBO(string pboPath) {
            Console.Out.WriteLine("Unpacking official Mike Force PBO");

            if (!File.Exists(pboPath)) {
                throw new ApplicationException(string.Format("PBO file does not exist: {0}", pboPath));
            }
            else {
                string bankRev_path = string.Format(
                    "{0}/BankRev/BankRev.exe",
                    Configuration.Settings.Arma3Tools_Path
                );

                var p = new System.Diagnostics.Process();
                p.StartInfo.FileName = bankRev_path;
                p.StartInfo.Arguments = string.Format("\"{0}\"", pboPath);
                p.Start();
                p.WaitForExit();

                string oldPath = pboPath.Replace(".pbo", "");
                string newPath = oldPath.Replace("official_", "airgoons_");

                if (Directory.Exists(newPath)) {
                    Directory.Delete(newPath, true);
                }

                Directory.Move(oldPath, newPath);

                return newPath;
            }
        }

        static void CustomizeMission(string customMission_path) {
            Console.Out.WriteLine("Applying customizations");
            var files = Directory.GetFiles(Configuration.Settings.Customizations_Path, "*.*", SearchOption.AllDirectories);

            foreach (var file in files) {
                var dest = file.Replace(Configuration.Settings.Customizations_Path, customMission_path);

                var dest_dir = Directory.GetParent(dest).FullName;
                if (!Directory.Exists(dest_dir)) {
                    Directory.CreateDirectory(dest_dir);
                }

                File.Copy(file, dest, true);
            }
        }

        static void PackPBO(string customMission_path) {
            Console.Out.WriteLine("Packing AirGoons Mike Force PBO");

            string fileBank_path = string.Format(
                "{0}/FileBank/FileBank.exe",
                Configuration.Settings.Arma3Tools_Path
            );

            var p = new System.Diagnostics.Process();
            p.StartInfo.FileName = fileBank_path;
            p.StartInfo.Arguments = string.Format("\"{0}\"", customMission_path);
            p.Start();
            p.WaitForExit();

            if (!Directory.Exists(Configuration.Settings.Output_Path)) {
                Directory.CreateDirectory(Configuration.Settings.Output_Path);
            }

            File.Copy(
                string.Format("{0}.pbo", customMission_path),
                string.Format("{0}/{1}", Configuration.Settings.Output_Path, Configuration.Settings.Output_Filename),
                true);
        }

        static void CleanUp(string workingDir) {
            Console.Out.WriteLine("Clean up working directories");

            if (Directory.Exists(workingDir)) {
                Directory.Delete(workingDir, true);
            }
        }
    }  
}
