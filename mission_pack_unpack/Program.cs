using System;

using Config.Net;

namespace mission_pack_unpack {

    class Program {
        static int Main(string[] args) {

            /*
             * Mission Pack Unpack
             * - Initialize values from configuration file
             * - Downloads lateset official MikeForce PBO from Steam Workshop
             * - Unpacks PBO using Arma 3 Tools
             * - Copies AirGoons customizations
             * - Packages PBO for manual deployment to server
             */

            try {
                Configuration.InitSettings();
                DownloadMikeForcePBO();
                UnpackPBO();
                CustomizeMission();
                PackPBO();

                return 0;
            }
            catch (Exception ex) {
                Console.Error.WriteLine(ex.ToString());
                return 1;
            }
        }

        static void DownloadMikeForcePBO() {
            Console.Out.WriteLine("Downloading official Mike Force PBO");
        }

        static void UnpackPBO() {
            Console.Out.WriteLine("Unpacking official Mike Force PBO");
        }

        static void CustomizeMission() {
            Console.Out.WriteLine("Applying customizations");
        }

        static void PackPBO() {
            Console.Out.WriteLine("Packing AirGoons Mike Force PBO");
        }
    }  
}
