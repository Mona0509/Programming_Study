#include "MyClass.h"
#include <iostream>
void MyClass::func(int num) {
	std::cout << "引数がポインタではない" << std::endl;
};
void MyClass::func(char* name) {
	std::cout << "引数がポインタである" << std::endl;
};
