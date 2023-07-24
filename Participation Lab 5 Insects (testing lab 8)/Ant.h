#pragma once
#include <iostream>
#include "Insect.h"

class Ant : public Insect
{
public:
	Ant(double s=0, std::string o=""):Insect(s,o)
	{ 
		std::cout << "Invoking the default Ant constructor" << std::endl; 
	}
	~Ant() {std::cout << "Invoking the default Ant deconstructor" << std::endl;}


	void Eat() const
	{
		std::cout << "As an ant, I eat everything" << std::endl;
	}
};
