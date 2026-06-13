// Kadai4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "MyClass.h"
int main()
{
	MyClass myClass;

	myClass.func(nullptr);
	// nullptrにNULLを入れて実行するとNULLが0と認識されて引数intの方が実行される
}

//
// 目標:NULLではなくnullptrを使う利点について
// func(int) func(char*) をオーバーロード
// nullptrをfuncに渡す
// NULLを渡した場合の曖昧さをコメントアウトで説明
// ポインタ引数を受ける関数でnullptrチェックを行う
//

