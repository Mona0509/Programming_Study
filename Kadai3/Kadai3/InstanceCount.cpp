#include "InstanceCount.h"
#include <iostream>

int InstanceCount::numCount = 0;
std::string InstanceCount::status_ = {};
void InstanceCount::OpenNum()const {
	// 状態表示
	std::cout << "状態表示:" << status_<<std::endl;
}

void InstanceCount::OpenInstance() {
	// staticメンバ関数で現在のインスタンス数を表示
	std::cout << "現在のインスタンス数:" << numCount << std::endl;
};

InstanceCount::InstanceCount() {
	numCount++;
	status_ = {"インスタンス生成中"};
	OpenInstance();
	OpenNum();
}
InstanceCount::~InstanceCount() {
	numCount--;
	status_ = { "インスタンス削除中" };
	OpenInstance();
	OpenNum();
}