#pragma once
#include <string>
class InstanceCount
{
public:
	// 生成中のインスタンス数をカウントするstaticメンバ変数作成
	static int numCount;
	// 状態を表示するテキスト
	static std::string status_;

	// コンストラクタとデストラクタでインスタンス数を増減
	InstanceCount();
	~InstanceCount();

	// 状態表示は関数で
	// 関数はconstメンバ関数で作成
	void OpenNum()const;

	// 現在のインスタンス数を表示
	static void OpenInstance();
};

