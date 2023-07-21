#include <iostream>
#include <cmath>
#include "Circle.h"


Circle::Circle() //[zero arugment, default]
{
	setRadius(0);
}

Circle::~Circle() //deconstructs the constructors
{
	std::cout << "Hey there. I am destructor!! Say goodbye to the constructors that were made!" << std::endl;
}

bool Circle::setRadius(float r)	//assigns the varible [setter, mutator]
{
	bool success{ true };
	if (r >= 0)
	{
		radius=r;
	}
	else if (r == -1)
	{
		exit;
	}
	else
	{
		std::cout << "Radius cannot be less than negative one." << std::endl;
		success = false;
	}
	return success;
}
float Circle::getRadius()	const	//used to print or return radius [getter, accessor]
{
	return radius;
}

float Circle::calcCircumference() const		//calculcates the circumference and returns it
{
	return 2 * pi * getRadius();
}

float Circle::calcArea() const		//calculcates the area and returns it
{
	return pi * (pow(getRadius(), 2));
}

void Circle::showData() const	//prints out information
{
	std::cout << std::endl;
	std::cout << "Printing information" << std::endl;
	std::cout << "The circle's radius is " << getRadius() << std::endl;
	std::cout << "The circle's circumference is " << calcCircumference() << std::endl;
	std::cout << "The circle's area is " << calcArea() << std::endl;
	std::cout << std::endl;
}
