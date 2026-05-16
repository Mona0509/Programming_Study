// Kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdio.h>
// name,hp,attack,defenseの要素を持つプログラム(構造体)を作成
struct StatusProgram {
	char name;
	int hp;
	int attack;
	int defense;
};

int OpenStatus(StatusProgram status);

int main()
{
	// 2体分のステータスデータを作成
	// ステータスデータを初期化、保持する
	StatusProgram player_status{
		'P',100,50,30
	};
	OpenStatus(player_status);
	StatusProgram enemy_status{
		'E',100,50,30
	};
	OpenStatus( enemy_status);
	return 0;
}

// int型引数で関数を作成
int OpenStatus(StatusProgram status) {	// 構造体を受け取り関数で表示する
	// キャラクター情報を見やすく表示
	printf("・%c の キャラクターステータス\n", status.name);
	printf("名前   :%c\n", status.name);
	printf("HP     :%d\n", status.hp);
	printf("攻撃力 :%d\n", status.attack);
	printf("防御力 :%d\n", status.defense);
	printf("\n");
	return 0;
}
