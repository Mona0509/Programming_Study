// Kadai_4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <iostream>
int Coin(int coin);
void LastCheck();
// 硬貨の種類分け用配列
int coinBox[5];
char check;
int coinCount = 0;
int coinTotal = 0;
int main()
{
	// 両替する金額
	int input;
	while (true)
	{
		// 初期化
		for (int i = 0; i < 6; i++)
		{
			coinBox[i] = 0;
		}
		printf("金額を入力してください。\n");
		// 1以上の入力検知
		std::cin >> input;
		// 両替総回数
		coinCount++;
		// 送金額計算
		coinTotal += input;
		// 一円玉
		printf("a？\n");
		Coin(input);
		printf("i？\n");
		LastCheck();
		// 両替終了後「y」で継続、それ以外は終了する
		printf("続けて両替しますか？\n");
		printf("「f」で続行、それ以外で終了。\n");
		std::cin >> check;
		if (check != 'f' && 'F') 
		{
			printf("両替実行総回数:%d\n", coinCount);
			printf("投入総金額:%d\n", coinTotal);
			break;
		}
		// 終了時に合計両替回数と合計金額を表示する
	}
	return 0;
}
int Coin(int coin) 
{
	// 金額%500,100・・・余りが4以下になれば終了
	for (; coin >= 5;)
	{
		if (coin / 500 != 0) 
		{
			coin %= 500;
			coinBox[0]+=1;
		}
		else if (coin / 100 != 0) 
		{
			coin %= 100;
			coinBox[1] += 1;

		}
		else if (coin / 50 != 0) 
		{
			coin %= 50;
			coinBox[2] += 1;

		}
		else if (coin / 10 != 0) 
		{
			coin %= 10;
			coinBox[3] += 1;

		}
		else if(coin / 5 !=0)
		{
			coin %= 5;
			coinBox[4] += 1;
		}
	}
	coinBox[5] = coin;
	return coin;
}
void LastCheck() 
{
	// 硬貨枚数を表示
	for (int a = 0; a < 6; a++)
	{
		// 0枚の硬貨は表示しない
		if (coinBox[a] != 0)
		{
			if (coinBox[a] != 0)
			{
				printf("五百円玉が %d枚。\n", coinBox[0]);
			}
			else if (coinBox[a] != 0)
			{
				printf("百円玉が %d枚。\n", coinBox[1]);
			}
			else if (coinBox[a] != 0)
			{
				printf("五十円玉が %d枚。\n", coinBox[2]);
			}
			else if (coinBox[a] != 0)
			{
				printf("十円玉が %d枚。\n", coinBox[3]);
			}
			else if (coinBox[a] != 0)
			{
				printf("五円玉が %d枚。\n", coinBox[4]);
			}
			else
			{
				printf("一円玉が %d枚。\n", coinBox[5]);
			}
		}
	}

}