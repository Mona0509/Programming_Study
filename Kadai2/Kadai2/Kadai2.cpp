// Kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "CheckClass.h"
int main()
{
	{
		CheckClass checkclass1;
		CheckClass checkclass2(10);
		CheckClass checkclass3(checkclass2);
		CheckClass checkclass4;
	}		
}
