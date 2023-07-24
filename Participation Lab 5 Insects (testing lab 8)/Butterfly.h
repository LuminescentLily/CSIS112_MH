#pragma once
#include <iostream>
#include "Insect.h"

class Butterfly : public Insect
{
public:
	Butterfly(double s=0, std::string o="") :Insect(s, o)
	{
		std::cout << "Invoking the default Butterfly constructor" << std::endl;
	}
	~Butterfly() { std::cout << "Invoking the default Butterfly deconstructor" << std::endl; }


	void Eat() const
	{
		std::cout << "As a butterfly, I eat nectar" << std::endl;
	}
};