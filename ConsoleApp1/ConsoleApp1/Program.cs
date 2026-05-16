using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int ram = random.Next(0, 10);
            bool check = false;
            while (check == false)
            {
                int number = int.Parse(Console.ReadLine());
                if(number > ram)
                {
                    Console.WriteLine("大きい");
                }
                else if(number < ram)
                {
                    Console.WriteLine("小さい");
                }
                else if(number == ram)
                {
                     check = true;
                }
            }
            Console.WriteLine("ゲームクリア");
        }
    }
}
