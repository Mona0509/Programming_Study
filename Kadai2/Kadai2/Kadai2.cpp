// Kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
int main()
{
	// int型の配列で箱を5つ作成
	int numbers[5]{
		10,
		20,
		30,
		45,
		80			// 任意の数を配列に追加、初期化する
	};
	// 表示する数
	int winNum = numbers[0];

	for (int i = 0; i < 5; i++) {
		if (winNum < numbers[i]) {
			winNum = numbers[i];
		}
	}
	// printfで「最大値は○○です」と表示
	printf("最大値は%dです\n",winNum);
	return 0;
}

