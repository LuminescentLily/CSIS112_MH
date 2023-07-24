#pragma once
#include <iostream>

class Insect
{
public:
	Insect(int s = 0)
	{
		size = s;
		std::cout << "Invoking the default Insect constructor" << std::endl;
	}
	Insect(int s, std::string o)
	{
		size = s;
		order = o;
		std::cout << "Invoking the 2-argument Insect constructor" << std::endl;
	}
	virtual ~Insect() { std::cout << "Invoking the default Insect deconstructor" << std::endl; };

	double setSize(int s) { size = s; }
	std::string setOrder(std::string o) { order = o; }

	double getSize() const { return size; }
	std::string getOrder() const { return order; }

	virtual void Eat() const = 0;


private:
	std::string order;
	double size;
};
