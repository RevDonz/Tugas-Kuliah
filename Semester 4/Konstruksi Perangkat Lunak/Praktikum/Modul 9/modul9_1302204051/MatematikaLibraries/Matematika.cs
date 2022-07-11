namespace MatematikaLibraries
{
    public class Matematika
    {
        public static int FPB(int input1, int input2)
        {
            int temp = 0;

            while (input2 != 0)
            {
                temp = input1 % input2;
                input1 = input2;
                input2 = temp;
            }

            return input1;
        }

        public static int KPK(int input1, int input2)
        {
            return input1 * input2 / FPB(input1, input2);
        }

        public static string Turunan(int[] persamaan)
        {
            string hasil = "";
            for (int i = 0; i < persamaan.Length-1; i++)
            {
                hasil += persamaan[i] * (persamaan.Length - (i + 1)) + (i < persamaan.Length - 2 ? "x" + (persamaan.Length - (i + 2) > 1 ? persamaan.Length - (i + 2) : "") + " + " : "") ;
            }

            return hasil;
        }

        public static string Integral(int[] persamaan)
        {
            string hasil = "";
            for (int i = 0; i < persamaan.Length; i++)
            {
                int pangkat = persamaan.Length - (i + 1);
                int temp = persamaan.Length - i;
                hasil += ((persamaan[i] / temp) != 1 ? persamaan[i] / temp : "") + "x" + (temp > 1 ? temp : "") + " + ";
            }
            hasil += "C";
            return hasil;
        }
    }
}