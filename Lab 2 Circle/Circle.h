#pragma once

#include <iostream>

class Circle
{
public:

	Circle();	//[zero arugment, default]

	~Circle();	//destructor

	bool setRadius(float r);	//assigns the varible [setter, mutator]

	float getRadius()	const;		//used in place of passing radius into different functions

	float calcArea() const;		//calculcates the area of a circle

	float calcCircumference() const;	//calculcates the circumference of a circle

	void showData() const;		//prints out the information for the user


private:
	float radius;
	const float pi = 3.1415926536;
	
};

