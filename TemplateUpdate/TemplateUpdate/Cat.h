#pragma once
#include "Animal.h"
#include <iostream>
class Cat:public Animal
{
public:
	void Naku()override 
	{
		std::cout << "ƒjƒƒ[" << std::endl;
	};
};

