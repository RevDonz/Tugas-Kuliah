using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace modul11_1302204051
{
    public class PusatDataSingleton
    {
        private List<string> DataTersimpan;
        private static PusatDataSingleton _instance;

        private PusatDataSingleton()
        {
            DataTersimpan = new List<string>();
        }

        public static PusatDataSingleton GetDataSingleton()
        {
            if (_instance == null)
            {
                _instance = new PusatDataSingleton();
            }
            return _instance;
        }

        public List<string> GetSemuaData()
        {
            return DataTersimpan;
        }

        public void PrintSemuaData()
        {
            foreach (var item in DataTersimpan)
            {
                Console.WriteLine(item);
            }
            Console.WriteLine();
        }

        public void AddSebuahData(string input)
        {
            this.DataTersimpan.Add(input);
        }

        public void HapusSebuahData(int index)
        {
            this.DataTersimpan.RemoveAt(index);
        }
    }
}
