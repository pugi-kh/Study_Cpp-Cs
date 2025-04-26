namespace project03_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Console.WriteLine("{0:D} / {1:D} = {2:D}", 100, 200, 0.5); //서식지정자가 잘못되어 오류가 발생
            Console.WriteLine("{0:D} / {1:D} = {2:f}", 100, 200, 0.5);
        }
    }
}
