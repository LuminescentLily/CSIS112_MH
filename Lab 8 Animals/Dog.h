#pragma once
#include <iostream>
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(int a, std::string n):Animal(a,n)
	//default constructor
	{
		std::cout << "Invoking the default Dog constructor" << std::endl;
	}
	~Dog() /*default deconstructer*/ { std::cout << "Invoking the default Dog deconstructor" << std::endl; }

	void Move() /*Move override function*/ const { std::cout << "I run" << std::endl; }

};
