#pragma once
#include <iostream>
#include <memory>
class MyClass
{
public:
	MyClass();
	~MyClass();
public:
	std::weak_ptr<MyClass> myClass_ = {};
};

