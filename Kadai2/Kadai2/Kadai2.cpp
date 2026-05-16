// Kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <stdio.h>
#include "AnswerText.h"

// name,score　を持つ構造体を定義
struct StudentProgram {
	char name;
	int score;
};
int checkNum = 0;	// 点数比較用
int answerNum = 0;	// 最高点
int averageNum = 0;	// 平均点	
int nameNum = 0;	// 最高点の生徒チェック用	
int main()
{
	StudentProgram student_1
	{'A',58};
	StudentProgram student_2
	{ 'B',47 };
	StudentProgram student_3
	{ 'C',89 };
	StudentProgram student_4
	{ 'D',90 };
	StudentProgram student_5
	{ 'E',36 };
	int boxScore[5]{		// 点数計算にforで繰り返したいため配列使用
		student_1.score,
		student_2.score,
		student_3.score,
		student_4.score,
		student_5.score,
	};
	int boxName[5]{	// 最高得点者を数字で割り出したいたて配列使用
		student_1.name,
		student_2.name,
		student_3.name,
		student_4.name,
		student_5.name,
	};
	for (int i = 0; i < 5; i++) {
		averageNum += boxScore[i];			// 合計を求める
		if (checkNum < boxScore[i]) {
			checkNum = boxScore[i];	// 最高得点更新
			nameNum = i;		// 最高得点者を更新
		}
	}
	answerNum = checkNum;		// 最高点の変数移動
	int answerH = averageNum / 5;		// 平均点計算
	OpenAnswer(answerNum,answerH,boxName[nameNum]);		// (最高点,平均点,最高得点者)
	return 0;
}

int OpenAnswer(int perfectAns, int averageAns, char perfectStudent) {
	printf("最高点: %d\n", perfectAns);	// 最高点表示
	printf("平均点: %d\n", averageAns);	// 平均点表示
	printf("最高得点者: %c\n", perfectStudent);	// 最高得点者の名前表示
	return 0;
}
