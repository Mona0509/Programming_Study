// Kadai1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "MyClass.h"
#include <memory>
int main()
{
	{
		std::unique_ptr<MyClass> myClass = std::make_unique<MyClass>();
	}
}
//
// 目標:unique_ptrの挙動確認
// クラスを作る
// クラスのコンストラクタで生成と表示
// クラスのデストラクタで破棄と表示
// mainのスコープ内でstd::make_uniqueでインスタンスを生成
//
