#include "CheckClass.h"
#include <iostream>
CheckClass::CheckClass() {

};
CheckClass::CheckClass(int num) {

};

CheckClass::CheckClass(const CheckClass& copy) {
	// コピーコンストラクタが呼び出されたことをログで表示
	std::cout << "コピーコンストラクタが呼び出されました" << std::endl;
};
CheckClass::~CheckClass() {
	// デストラクタが呼び出されたことをログで表示
	std::cout << "デストラクタが呼び出されました" << std::endl;
};
