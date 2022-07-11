namespace MathematicsLibraries
{
    public class Mathematics
    {
        public static int GetGCD(int firstNumber, int secondNumber)
        {
            int temp = 0;

            while (secondNumber != 0)
            {
                temp = firstNumber % secondNumber;
                firstNumber = secondNumber;
                secondNumber = temp;
            }

            return firstNumber;
        }

        public static int GetLCM(int firstNumber, int secondNumber)
        {
            return firstNumber * secondNumber / GetGCD(firstNumber, secondNumber);
        }

        // Untuk expression dari variabel Result memang seperti itu
        // dikarenakan untuk mencapai hasil yang diinginkan.
        public static string Derivative(int[] equality)
        {
            string Result = "";

            for (int i = 0; i < equality.Length-1; i++)
            {
                Result += equality[i] * (equality.Length - (i + 1)) + (i < equality.Length - 2 ? "x" + (equality.Length - (i + 2) > 1 ? equality.Length - (i + 2) : "") + " + " : "") ;
            }

            return Result;
        }
    
        public static string Integral(int[] equality)
        {
            string Result = "";

            for (int i = 0; i < equality.Length; i++)
            {
                int temp = equality.Length - i;
                Result += ((equality[i] / temp) != 1 ? equality[i] / temp : "") + "x" + (temp > 1 ? temp : "") + " + ";
            }

            Result += "C";
            return Result;
        }
    }
}