namespace MainProgram
{
    internal class MainDriver
    {
        public static void Main(string[] args)
        {
            int[] firstEquality = { 1, 4, -12, 9 };
            int[] secondEquality = { 4, 6, -12, 9 };

            Console.WriteLine(MathematicsLibraries.Mathematics.GetGCD(12, 45));
            Console.WriteLine(MathematicsLibraries.Mathematics.GetLCM(12, 8));
            Console.WriteLine(MathematicsLibraries.Mathematics.Derivative(firstEquality));
            Console.WriteLine(MathematicsLibraries.Mathematics.Integral(secondEquality));
        }
    }
}