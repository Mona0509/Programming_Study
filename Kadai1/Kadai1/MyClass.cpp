#include "MyClass.h"
#include <iostream>
MyClass::MyClass() {
	std::cout << "生成" << std::endl;
};
MyClass::~MyClass() {
	std::cout << "破棄" << std::endl;
};

//
// 目標:unique_ptrの挙動確認
// クラスを作る
// クラスのコンストラクタで生成と表示
// クラスのデストラクタで破棄と表示
// mainのスコープ内でstd::make_uniqueでインスタンスを生成
//
