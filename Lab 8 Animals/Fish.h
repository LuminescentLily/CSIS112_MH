#pragma once
#include <iostream>
#include "Animal.h"

class Fish : public Animal
{
public:
	Fish(int a, std::string n) :Animal(a, n)
	//default constructer
	{
		std::cout << "Invoking the default Fish constructor" << std::endl;
	}
	~Fish() /*default deconstructer*/ { std::cout << "Invoking the default Fish deconstructor" << std::endl; }

	void Move() /*Move override function*/ const { std::cout << "I swim" << std::endl; }

};

