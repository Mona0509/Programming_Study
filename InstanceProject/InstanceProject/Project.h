#pragma once
#include <string>
class Project
{
public:
	Project();
	~Project();
};

// メンバを持つクラスを宣言、定義する
// 同じクラスをローカル変数とnewの両方で生成
// コンストラクタとデストラクタでログを表示、順番を確認する
// スコープ{}終了時の破棄、deleteの破棄を比較する
