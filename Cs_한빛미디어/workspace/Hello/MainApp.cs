using System;
using static System.Console;

namespace Hello
{
    internal class MainApp
    {
        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                Console.WriteLine("사용법 : Hello.exe <이름>"); //인자를 넣지 않으면 해당 코드를 실행하고 종료
                return;
            }

            WriteLine("Helllo, {0}", args[0]); //인자를 넣으면 해당 코드 실행

        }
    }
}
