#pragma once
#include <string>
#include <iostream>

// Characterクラスを作成
class Character
{
	// メンバ変数はprivate
	private:
	// name,hp,attack　という名前のメンバ変数を定義
		std::string name_ = {};
		int hp_;
		int attack_;

	// メンバ変数の取得、更新はpublic メンバ関数を経由する
	public:
		// 関数printStatus()を作成、現在の状態を表示
		void printStatus(const char* name, int hp, int attack) {
			name_ = name;
			hp_ = hp;
			attack_ = attack;

			std::cout	<< "名前：" << name_ << std::endl 
						<< "HP：" << hp_ << std::endl 
						<< "攻撃力：" << attack_ << std::endl
						<< std::endl;
		};
};

