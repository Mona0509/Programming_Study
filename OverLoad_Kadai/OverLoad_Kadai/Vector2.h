#pragma once
#include <string>
class Vector2 final
{
public:
	//Vector2(const Vector2& src);
	Vector2(float x,float y,float answer);
	float operator +(float add);
	float operator -(float minus);
	float operator ==(float equal);
	void operator <<(float answer);
	

public:
	float x_ = 0;
	float y_ = 0;
	float answer_ = 0;
	std::string name_ = {};
};

// x,yの関数をもつクラスを作成
// +,-,==をオーバーロードする
// std::coutで表示、<<もオーバーロード
// 計算結果を表示
