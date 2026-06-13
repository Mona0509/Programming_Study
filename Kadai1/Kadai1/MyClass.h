#pragma once
class MyClass
{
public:
	MyClass();
	~MyClass();
};

//
// 目標:unique_ptrの挙動確認
// クラスを作る
// クラスのコンストラクタで生成と表示
// クラスのデストラクタで破棄と表示
// mainのスコープ内でstd::make_uniqueでインスタンスを生成
//
