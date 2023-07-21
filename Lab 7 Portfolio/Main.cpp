#include <iostream>
#include <string>
#include "Portfolio.h"
#include <iomanip>
#include <cctype>


using namespace std;

int main()
{
	string portName;
	char selection;

	cout << "Enter a name for your portfolio:  ";
	getline(cin,portName);
	Portfolio p(portName);

	cout << setw(40) << "Main Menu" << endl;
	cout << setw(45) << "S -- Purchase stock" << endl;
	cout << setw(45) << "B -- Purchase bonds" << endl;
	cout << setw(56) << "L -- List portfolio securities" << endl;
	cout << setw(35) << "Q -- Quit" << endl;

	cout << setw(42) << "Selection: ";
	cin >> selection;
	selection = toupper(selection);										//makes selection uppercase
	
	while (selection != 'Q' & selection != 'S' & selection != 'B' & selection != 'L' & cin.fail())
	//Bullet proofing
	{
		cout << "You must enter one of the letters above. Please try again. " << endl;
		cin.clear();
		cin >> selection;
		selection = toupper(selection);
	}

	while (selection != 'Q')
	{
		switch (selection)
		{
		case 'S':
		{
			cout << endl << endl;
			cout << "Purchase Stocks" << endl;
			p.puchaseStocks();
			break;
		}
		case 'B':
		{
			cout << endl << endl;
			cout << "Purchase Bonds" << endl;
			p.puchaseBonds();
			break;
		}
		case 'L':
		{
			cout << endl << endl;
			p.print();
			break;
		}
		default:
			cout << "You shouldn't see this. The code has broken, try again anyway." << endl;
			break;
		}

		cout << setw(40) << "Main Menu" << endl;
		cout << setw(45) << "S -- Purchase stock" << endl;
		cout << setw(45) << "B -- Purchase bonds" << endl;
		cout << setw(56) << "L -- List portfolio securities" << endl;
		cout << setw(35) << "Q -- Quit" << endl;

		cout << setw(42) << "Selection: ";
		cin >> selection;
		selection = toupper(selection);

		while (selection != 'Q' & selection != 'S' & selection != 'B' & selection != 'L' & cin.fail())
		//Bullet proofing
		{
			cout << "You must enter one of the letters above. Please try again. " << endl;
			cin.clear();
			cin >> selection;
			selection = toupper(selection);
		}
	}

	cout << "Thank you very much for your time!" << endl;
	system("pause");
	return 0;
}
