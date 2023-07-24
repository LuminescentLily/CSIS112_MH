#pragma once
#include <iostream>
#include "NegativeException.h"


template <class T>
class Rectangle
{
	friend std::ostream& operator<<(std::ostream&, Rectangle);

public:

	Rectangle(T l=0, T w=0)
	{
		length = l;
		width = w;
	}

	~Rectangle() { std::cout << "Destructor here! Hello." << std::endl; }

	T setLength(T l)
	{
		if (l < 0)
		{
			throw NegativeException{};
		}
		else
		{
			length = l;
		}
		return static_cast<T>(length);
	}

	T setWidth(T w)
	{
		if (w < 0)
		{
			throw NegativeException{};
		}
		else
		{
			width = w;
		}
		return static_cast<T>(width);
	}

	T getLength() { return length; }
	T getWidth() { return width; }


private:

	T length, width;

};

template <class T>
std::ostream& operator<<(std::ostream& output, Rectangle <T> r)		//this does not like the template
{
	output << "Length: " << r.getLength() << std::endl;
	output << "Width: " << r.getWidth() << std::endl;

	return output;
}