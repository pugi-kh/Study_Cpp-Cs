namespace day2_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            int result;

            string str;

            str = Console.ReadLine(); //문자열을 입력받는 함수
            a = Convert.ToInt32(str);

            str = Console.ReadLine();
            b = Convert.ToInt32(str);

            result = a + b;
            Console.WriteLine(a + "+" + b + "=" + result);


            Console.WriteLine("\n창을 닫으려면 아무키나 입력하세요..");
            Console.ReadLine();
        }
    }
}
