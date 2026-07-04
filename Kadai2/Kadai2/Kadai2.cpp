// Kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "template.h"

int main()
{
    float answer1 = disp<float, int>(3,6.8f,'+');
    float answer2 = disp<float, int>(3,6.8f,'-');
    float answer3 = disp<float, int>(3,6.8f,'*');
    float answer4 = disp<float, int>(3,6.8f,'/');
}

//
// template.hを作成、ここにtemplateを作成する
// 
// 関数テンプレートを定義も含めて記述する
// 
// 違う型同士を加算して、どちらかの型で返す関数
// 違う型同士を減算して、どちらかの型で返す関数
// 違う型同士を乗算して、どちらかの型で返す関数
// 違う型同士を除算して、どちらかの型で返す関数
// 
// main 関数で利用できるようにする
//