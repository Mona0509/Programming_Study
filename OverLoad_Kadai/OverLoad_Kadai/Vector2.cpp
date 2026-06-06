#include "Vector2.h"
#include <iostream>

//Vector2::Vector2(const Vector2& src) {
//	x_ = src.x_;
//	y_ = src.y_;
//	name_ = src.name_;
//}
Vector2::Vector2(float x, float y, float answer ) {
	x_ = x;
	y_ = y;
	answer_ = answer;
};

float Vector2::operator +(float add) {
	float total = 0;
	return total = x_ + y_ + add;
};
float Vector2::operator -(float minus) {
	float total = 0;
	return total = x_ - y_ - minus;
};
float Vector2::operator ==(float equal) {
	float total = 0;
	return total = x_ == y_ == equal;
};
void Vector2::operator <<(float answer) {
	std::cout << answer << std::endl;
};
