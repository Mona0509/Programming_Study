#pragma once
#include "Animal.h"
#include <iostream>
class Dog : public Animal
{
public:
	void Naku()override
	{
		std::cout << "ƒƒ“" << std::endl;
	};
};

