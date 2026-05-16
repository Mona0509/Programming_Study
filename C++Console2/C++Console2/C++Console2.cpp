// C++Console2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
void f();

// メイン関数
int main()
{
    // 入力した数値を５乗した数を足す
    int answer1 = f(0);
    //int answer = x + y + z;
    //printf("%d\n", answer);
    return 0;
}
int f(int i)
{
    int a = 0;
    scanf_s("%d", &a);
    int x = 1;
    for (int i = 0; i < 5; ++i)
    {
        x *= a;
    }
    x = i;
    return x;
}

