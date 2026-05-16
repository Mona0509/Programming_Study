using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace kazuateGame
{
    // ランダムに0から9の数値を出す
    // 入力をする
    // ランダムの数字とあっているか確認
    // あっていたら処理終了
    // 間違っていたら入力をするに戻る
    internal class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int ram = random.Next(0, 9);
            bool check = false;
            while (check == false)
            {
                int number = int.Parse(Console.ReadLine());
                if (number < ram)
                {
                   Console.WriteLine("小さい");
                }
                else if (number > ram)
                {
                   Console.WriteLine("大きい");
                }
                else if(number == ram)
                {
                    Console.WriteLine("ゲームクリア");
                    check = true;
                }
            }
        }
    }
}
