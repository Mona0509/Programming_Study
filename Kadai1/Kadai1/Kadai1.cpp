// Kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。

#include <iostream>
#include "Character.h"

int main()
{	
	// mainで2タイ分のインスタンスを作成、表示
	Character character1;
	character1.printStatus("えーさん",50,13);
	Character character2;
	character2.printStatus("びーさん", 30, 2);
}
