// f2の定義
// 宣言した関数を{}で定義

// 基本宣言はコンピュータにこの関数があると知らせるために使う
// main関数より後に定義した関数をmain関数より前に宣言しておくことで
// コンパイルエラーを起こさない
#include <stdio.h>
#include "FileC.h"

// 本体として宣言
int valueA;

int setValueA(int newValueA)
{
	valueA = newValueA;
}

void f2()
{
	printf("f2が呼び出されました。\n");
}
// 宣言の戻り値、引数、関数名どおりに定義は書く
// 逆に定義の戻り値、引数、関数名を変える必要があれば宣言も変える