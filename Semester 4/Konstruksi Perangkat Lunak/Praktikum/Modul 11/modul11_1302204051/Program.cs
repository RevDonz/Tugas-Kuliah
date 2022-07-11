namespace modul11_1302204051
{
    public class Program
    {
        public static void Main(string[] args)
        {
            List<string> allData1, allData2;

            PusatDataSingleton data1 = PusatDataSingleton.GetDataSingleton();
            PusatDataSingleton data2 = PusatDataSingleton.GetDataSingleton();

            data1.AddSebuahData("Reva Doni Aprilio");
            data1.AddSebuahData("Abdul Ghofur");
            data1.AddSebuahData("Royta Marpaung");
            data1.AddSebuahData("Rizky Ramdhan");
            data1.AddSebuahData("Rafi Atha");
            data1.AddSebuahData("Muhammad Auzan Zaky");
            data1.AddSebuahData("Daffa Hilmy Fadhlurrohman (Asprak)");
            data1.AddSebuahData("Muhammad Rizky");

            data2.PrintSemuaData();
            data2.HapusSebuahData(6);
            data1.PrintSemuaData();

            allData1 = data1.GetSemuaData();
            allData2 = data2.GetSemuaData();

            for (int i = 0; i < allData1.Count; i++)
            {
                Console.WriteLine(allData1[i]);
            }

            Console.WriteLine();

            for (int i = 0; i < allData2.Count; i++)
            {
                Console.WriteLine(allData2[i]);
            }
        }
    }
}





