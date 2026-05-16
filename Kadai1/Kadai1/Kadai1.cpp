// Kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

int agesNum(int ageCatch);

int main()
{
	// int型の配列で箱を４つ用意
	int ages[4]{
		15,
		32,
		11,
		48			// 配列に15,32,11,48を代入・初期化する
	};
	// forで配列の全要素を順番に表示
	for (int i = 0; i < 4; i++) {
		printf("%d\n", ages[i]);
	}
	agesNum(ages[0]);
	agesNum(ages[1]);
	agesNum(ages[2]);
	agesNum(ages[3]);
	return 0;
}
// 表示には「引数で年齢を受け取る関数」を利用する
// intの引数の関数を使用
int agesNum(int ageCatch) {
	// printfで「年齢は○○です」と表示
	printf("年齢は%dです\n", ageCatch);
	return 0;
}
