#pragma once
#include <iostream>
#include "Animal.h"

class Snake : public Animal
{
public:
	Snake(int a, std::string n) :Animal(a, n)
	//default constructor
	{
		std::cout << "Invoking the default Snake constructor" << std::endl;
	}
	~Snake() /*default deconstructer*/ { std::cout << "Invoking the default Snake deconstructor" << std::endl; }

	void Move() /*Move override function*/ const { std::cout << "I slither" << std::endl; }

};