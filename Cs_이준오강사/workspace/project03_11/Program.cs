namespace project03_11
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("{0,5:s}", "★");
            Console.WriteLine("{0,6:s}", "★★★");
            Console.WriteLine("{0,7:s}", "★★★★★");
            Console.WriteLine("{0,8:s}", "★★★★★★★");
            Console.WriteLine("{0,9:s}", "★★★★★★★★★");
            Console.WriteLine("{0,8:s}", "★★★★★★★");
            Console.WriteLine("{0,7:s}", "★★★★★");
            Console.WriteLine("{0,6:s}", "★★★");
            Console.WriteLine("{0,5:s}", "★");
            Console.WriteLine();

            string fullstar = "★★★★★★★★★★";
            int len = 4;
            for (int i = 0; i < 9; i++)
            {
                string star;
                if (i < 5)
                {
                    ++len;
                    star = fullstar.Substring(0, 1 + (2 * i));
                }
                else
                {
                    --len;
                    star = fullstar.Substring(0, 7 - (2 * (i - 5)));
                }
                string format = "{0," + len + ":s}";
                Console.Write(format, star);
                Console.WriteLine();
            }
        }
    }
}
