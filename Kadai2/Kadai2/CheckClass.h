#pragma once
class CheckClass
{
public:
	// 引数なしコンストラクタを作成
	CheckClass();
	// 引数ありコンストラクタを作成
	CheckClass(int num_);
	// コピーコンストラクタを作成
	CheckClass(const CheckClass& copy_);
	// デストラクタを作成
	~CheckClass();
	
	// コピーコンストラクタ用に関数を宣言、定義

};


