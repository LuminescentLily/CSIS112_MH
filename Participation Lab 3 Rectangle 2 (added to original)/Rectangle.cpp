#include <iostream>
#include "Rectangle.h"

int main()		//client code, can't trust the user
{
	Rectangle r(5, 4);
	int myInt;

	std::cout << "Please enter an integer: " << std::endl;
	std::cin >> myInt;

	r -= myInt;

	r.printRec();

	std::cout << std::endl;
	system("pause");
	return 0;
}
