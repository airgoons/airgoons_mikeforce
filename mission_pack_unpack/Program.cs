using System;
using System.IO;
using Config.Net;

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
                string workingDir = Path.GetFullPath("./temp");

                CleanUp(workingDir);

                Configuration.InitSettings();
                string mikeForcePBO_path = CopyMikeForcePBO(workingDir);
                string customMission_path = UnpackPBO(mikeForcePBO_path);
                CustomizeMission(customMission_path);
                PackPBO(customMission_path);

                CleanUp(workingDir);

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
            Console.Out.WriteLine("Downloading official Mike Force PBO");

            string filename = "1799728943668364634_legacy.bin";
            string mikeforce_filepath = string.Format(
                "{0}/{1}",
                Configuration.Settings.MikeForce_Path,
                filename);

            if (!File.Exists(mikeforce_filepath)) {
                throw new ApplicationException(string.Format("Mike Force workshop file does not exist:  {0}", mikeforce_filepath));
            }

            else {
                
                string destinationPath = string.Format("{0}/{1}", workingDir, "mikeforce_latest.pbo");
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
                p.StartInfo.Arguments = pboPath;
                p.Start();
                p.WaitForExit();

                File.Move(pboPath, pboPath.Replace("mikeforce_latest.pbo", "mikeforce_latest_official.pbo"));

                string oldPath = pboPath.Replace(".pbo", "");
                string newPath = pboPath.Replace(".pbo", "_airgoons");
                Directory.Move(oldPath, newPath);

                return newPath;
            }
        }

        static void CustomizeMission(string customMission_path) {
            Console.Out.WriteLine("Applying customizations");
            var files = Directory.GetFiles(Configuration.Settings.Customizations_Path, "*.*", SearchOption.AllDirectories);
            foreach (var file in files) {
                File.Copy(file, file.Replace(Configuration.Settings.Customizations_Path, customMission_path), true);
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
            p.StartInfo.Arguments = customMission_path;
            p.Start();
            p.WaitForExit();

            File.Copy(string.Format("{0}.pbo", customMission_path), Configuration.Settings.Output_Path, true);
        }

        static void CleanUp(string workingDir) {
            Console.Out.WriteLine("Clean up working directories");

            if (Directory.Exists(workingDir)) {
                Directory.Delete(workingDir, true);
            }
        }
    }  
}
