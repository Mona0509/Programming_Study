#pragma once
#include <iostream>
#include <memory>
class MyClass
{
public:
	MyClass();
	~MyClass();
public:
	std::shared_ptr<MyClass> myClass_ = {};
};

