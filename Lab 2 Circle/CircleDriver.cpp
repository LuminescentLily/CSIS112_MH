#include <iostream>
#include "Circle.h"

using namespace std;

int main()		//client code, can't trust the user
{
	double r;	//var used to catch the number entered by the user for radius

	Circle c;	//sets up the class to be used

	cout << "Please enter a number for the radius." << endl;
	cin >> r;

	while (r != -1)		//will allow the user to keep runnning the program until -1 is entered
	{
		while (cin.fail() || r < 0) //Bullet proofing
		{
			cout << "You must enter a number, and that number must be positive.  Please try again. " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> r;
		}

		c.setRadius(r);		//getting the radius entered by the user

		c.showData();		//showing the answers calculcated

		cout << "Would you like to recalculate with a new radius? "
			<< "If so enter a new radius. If not enter [- 1] without the brackets to exit the program." << endl;
		cin >> r;		//re-entering radius for many reasons
	}


	cout << endl;
	system("pause");
	return 0;
}
