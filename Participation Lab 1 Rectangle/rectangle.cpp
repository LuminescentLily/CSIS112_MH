#include <iostream>
#include "Rectangle.h"


	Rectangle::Rectangle() :length(0), width(0) //[zero arugment, default]
	{
		/*setLength(0);
		setWidth(0);*/
	}

	Rectangle::Rectangle(int l, int w)
	{
		length = l;
		width = w;
	}

	Rectangle::~Rectangle()
	{
		std::cout << "Hey there. I am in the destructor right now!!\n" << std::endl;
	}

	bool Rectangle::setLength(int l)	//assigns the varible [setter, mutator]
	{
		bool success{ true };
		if (l >= 0)
		{
			length = l;
		}
		else
		{
			std::cout << "Length cannot be less than or equal to zero." << std::endl;
			success = false;
		}
		return success;
	}
	int Rectangle::getLength()	const	//used to print or return length [getter, accessor]
	{
		return length;
	}
	void Rectangle::setWidth(int w)	//assigns the varible [setter, mutator]
	{
		width = w;
	}
	int Rectangle::getWidth() const	//used to print or return width [getter, accessor]
	{
		return width;
	}

	int Rectangle::calcArea() const		//example of a locked function
	{
		return getLength() * getWidth();	//in case you change the var names
	}

	void Rectangle::printRec() const
	{
		std::cout << "Printing information" << std::endl;
		std::cout << "The rectangle's length is " << getLength() << std::endl;
		std::cout << "The retangle's width is " << getWidth() << std::endl;
		std::cout << "The rectangle's area is " << calcArea() << std::endl;
		std::cout << std::endl;
	}

