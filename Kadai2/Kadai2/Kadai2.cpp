// Kadai2.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <memory>
#include "MyClass.h"
int main()
{

	{
		std::shared_ptr<MyClass> myClass1;
		std::shared_ptr<MyClass> myClass2 = std::make_shared<MyClass>();
		myClass1->myClass_ = myClass2;
		myClass2->myClass_ = myClass1;
	}
}
//
// 目標:shared_ptrを使って循環参照を使う
// 課題1のクラスを応用する
// 二つのインスタンスでお互いのshared_ptrを保持
// スコープ終了時デストラクタが呼ばれていなければOK
//
