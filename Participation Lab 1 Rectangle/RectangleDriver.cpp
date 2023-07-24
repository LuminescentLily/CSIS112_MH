#include <iostream>
#include "Rectangle.h"

int main()		//client code, can't trust the user
{
	Rectangle r;

	Rectangle r2(5, 30);

	r2.printRec();

	bool lengthSuc {true};
	lengthSuc=r.setLength(-35);
	r.setWidth(30);

	r.printRec();

	//if (lengthSuc)
	//{
	//	std::cout << "Length = " << r.getLength() << std::endl;
	//}
	

	//std::cout << "Width = " << r.getWidth() << std::endl;
	//std::cout << "The area is " << r.calcArea() << std::endl;

	std::cout << std::endl;
	system("pause");
	return 0;
}