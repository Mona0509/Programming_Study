using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CordBreaker
{
    // ４桁を入力
    // ヒットの検知
    // ブローの検知(ヒットの数字はのぞく)
    // ヒットとブローの数字を表示
    // 繰り返した回数をカウント
    internal class Program
    {
        static void Main(string[] args)
        {
            // 答えの箱を４つ作る
            int[] answer = new int[4];
            int countNum = 0;
            Random random = new Random();
            for (int i = 0; i < 4; i++)
            {
                // ランダムな4桁の数字を出力
                answer[i] = random.Next(10);
            }
            // 入力の箱を４つ作る
            int[] nums = new int[4];
            // 入力を検知
            // 4つの答えと入力を比較する
            // 4桁目～1桁目までを順に比較する
            while (true)
            {
                for (int i = 0; i < 4; i++)
                {
                    Console.WriteLine(i + 1 + "番目の数字を入力してください");
                    nums[i] = int.Parse(Console.ReadLine());
                }
                int blow = 0;
                int hit = 0;
                countNum++;
                for (int i = 0; i < 4; i++)
                {
                    int answerNum = answer[i];
                    // 答えを一つずつ見ていく
                    for (int a = 0; a < 4; a++)
                    {
                        if (nums[i] == answerNum)
                        {
                            blow++;
                        }
                    }
                    if (nums[i] == answer[i])
                    {
                       hit++;
                       blow--;
                       if(hit == 4)
                       {
                          Console.WriteLine("ゲームクリア");
                          Console.WriteLine(countNum + "回目");
                          break;
                       }
                    }
                }
            }
        }
    }
}
