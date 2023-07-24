#pragma once
#include <iostream>
#include "Insect.h"

class Termite : public Insect
{
public:
	Termite(double s=0, std::string o="") :Insect(s, o)
	{
		std::cout << "Invoking the default Termite constructor" << std::endl;
	}
	~Termite() { std::cout << "Invoking the default Termite deconstructor" << std::endl; }


	void Eat() const
	{
		std::cout << "As a termite, I eat wood" << std::endl;
	}
};