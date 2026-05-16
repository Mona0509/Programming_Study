#include "FileC.h"
#include <stdio.h>

// #include "FileC.h" をおなじフォルダ内で呼び出すとエラーが起きる
// ヘッダーファイルの数値が代入される

int f(int number, float value)
{
	printf("FileA.cppが呼び出されました。\n");
	int answer = number + (int)value;
	printf("関数ｆが呼び出されました。answerは[%d]です\n", answer);

	setValueA(5);
	f2();
	
	return answer;  // ローカル変数
}