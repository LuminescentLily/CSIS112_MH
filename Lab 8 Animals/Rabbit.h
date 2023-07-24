#pragma once
#include <iostream>
#include "Animal.h"

class Rabbit : public Animal
{
public:
	Rabbit(int a, std::string n) :Animal(a, n)
	//default constructor
	{
		std::cout << "Invoking the default Rabbit constructor" << std::endl;
	}
	~Rabbit() /*default deconstructer*/ { std::cout << "Invoking the default Rabbit deconstructor" << std::endl; }

	void Move() /*Move override function*/ const { std::cout << "I hop" << std::endl; }

};
