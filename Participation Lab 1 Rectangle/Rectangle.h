//#pragma once //same as the ifndef way
#ifndef RECTANGLE_H

#define RECTANGLE_H

#include <iostream>

class Rectangle
{
public:

		Rectangle();	//[zero arugment, default]

		Rectangle(int l, int w);

		~Rectangle();

		bool setLength(int l);	//assigns the varible [setter, mutator]

		int getLength()	const;	//used to print or return length [getter, accessor]

		void setWidth(int w);	//assigns the varible [setter, mutator]

		int getWidth() const;	//used to print or return width [getter, accessor]

		int calcArea() const;		//example of a locked function

		void printRec() const;
	

private:
	int length;
	int width;

};

#endif // !RECTANGLE_H