// ArrayProject.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdio.h>

int main()
{
	int count[4];
	int hp = 100;	// ※ メモリ上で count の直後に配置される可能性がある

	// count 配列の初期化
	for (int i = 0; i <= 4; i++) {
		count[i] = 0;	
		// ※ i が 4 の時に hp の領域を破壊している可能性がある
		// ※ count[4] に hp 関数があてはめられる可能性がある
	}

	// プレイヤーキャラの死亡判定
	if (hp == 0) {
		// ※なぜかここにきてしまう可能性がある
	}
	printf("%d\n",hp);
}

// int a [a][b][c]	// 多次元配列
// int a ["奥行(z)"]["縦(y)"]["横(x)"] の順に箱があるイメージ
//
// char 変数 []
// char は配列にすると2文字以降も入力できる
// [] の中に文字の上限を指定できる
// char の配列を使用する場合、printf の変数指定には「%s」にする
// 
//「null文字の例」
// char str[10] = "abcdefghij";
// printf("%s\n", str);
// 
// 
//
	/*
	// 文字の表示
	char s = 'a';
	printf("%c\n", s);
	char str[10];
	str[0] = 97;
	str[1] = 0;
	printf("%s\n", str);

	printf("%c\n", 97);

	char str[10];
	str[0] = 'あ';
	str[1] = 'い';
	str[2] = 'う';
	str[3] = '\0';		// null文字
	printf("%s\n", str);

	char str[10] = "あいう";
	printf("%c\n", str[0]);
	*/
