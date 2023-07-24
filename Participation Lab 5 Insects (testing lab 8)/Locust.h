#pragma once
#include <iostream>
#include "Insect.h"

class Locust : public Insect
{
public:
	Locust(double s=0, std::string o="") :Insect(s, o)
	{
		std::cout << "Invoking the default Locust constructor" << std::endl;
	}
	~Locust() { std::cout << "Invoking the default Locust deconstructor" << std::endl; }


	void Eat() const
	{
		std::cout << "As a locust, I eat leaves" << std::endl;
	}
};