// Kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "template.h"

int main()
{
    int answer1 = disp<int>(3,5,'+');
    int answer2 = disp<int>(3,5,'-');
    int answer3 = disp<int>(3,5,'/');
    int answer4 = disp<int>(3,5,'*');
}


//
// Templateで下記を定義も含めて記述する
// 
// 同じ型同士を加算して返す関数
// 同じ型同士を減算して返す関数
///同じ型同士を乗算して返す関数
// 同じ型同士を除算して返す関数
// 
// main関数で利用できるようにする
//
