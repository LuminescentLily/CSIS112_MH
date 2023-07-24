#include <iostream>
#include "Rectangle.h"
#include "NegativeException.h"


using namespace std;

int main()
{
		Rectangle <double>r1(0,0);		//I dont know why these need numbers
		Rectangle <double>r2(0,0);
		Rectangle <double>r3(0,0);

	try
	{
		r1.setLength(2.2);
		r1.setWidth(3.3);

		r2.setLength(4);
		r2.setWidth(5);

		r3.setLength(-5);
		r3.setWidth(-7);

	}
	catch (NegativeException& e)
	{
		cout << "Exception occurred: " << e.what() << endl;
	}
	catch (exception& e)
	{
		cout << "Exception occurred: " << e.what() << endl;
		system("pause");
		return 0;
	}
	catch (...)
	{
		cout << "Something extremely bad and unexcepted happened. Goodbye." << endl;
	}

	cout << r1 << endl;		//the instructions said to print out all three ojects so I had to move stuff
	cout << r2 << endl;
	cout << r3 << endl;

	system("pause");
	return 0;
}
