namespace project03_8
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("{0:d}", 123);
            Console.WriteLine("{0,5:d}", 123); 
            // -> 최소 5칸은 만들어 놓겠다
            Console.WriteLine("{0,5:d}", 12345678);
            Console.WriteLine("{0,5:d5}", 123); 
            // -> 정수를 5개는 넣겠다
            Console.WriteLine("{0,5:d5}", 12345678);
            Console.WriteLine("{0:d5}", 123);
            Console.WriteLine();

            Console.WriteLine("{0:f}", 123.456);
            Console.WriteLine("{0,8:f1}", 123.456);
            // -> 소수점 넷째자리까지 표기하겠다.
            Console.WriteLine("{0,8:f4}", 123.456);
            Console.WriteLine();

            Console.WriteLine("{0:s}", "CSharp");
            Console.WriteLine("{0,8:s}", "CSharp");
        }
    }
}
