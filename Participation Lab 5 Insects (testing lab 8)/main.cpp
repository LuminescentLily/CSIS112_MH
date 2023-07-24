//Vigenere Cypher --- cool thing research
#include "Insect.h"
#include "Butterfly.h"
#include "Termite.h"
#include "Locust.h"
#include "Ant.h"
#include <iostream>
#include <array>
#include <random>

using namespace std;

int main()
{
	srand(100);
	Insect* insects[3];
	int choice;
	string order;
	double ranNum;
	

	for (int i{ 0 }; i < 3; i++)
	{
		cout << "Main Menu" << endl;
		cout << "1 - Ant" << endl;
		cout << "2 - Locust" << endl;
		cout << "3 - Butterfly" << endl;
		cout << "4 - Termite" << endl;
		cout << "Selection: ";
		cin >> choice;
		cout << endl << endl;


		ranNum = rand();
		
		cout << "Enter the order of the insect: ";
		cin >> order;

		switch (choice)
		{
		case 1:
			insects[i] = new Ant(ranNum,order);
			break;

		case 2:
			insects[i] = new Locust(ranNum, order);
			break;

		case 3:
			insects[i] = new Butterfly(ranNum, order);
			break;

		case 4:
			insects[i] = new Termite(ranNum, order);
			break;
		}
		cout << endl << endl;

	}

	cout << endl << endl;

	for (int i{ 0 }; i < 3; i++)
	{
		insects[i]->Eat();
	}

	cout << endl << endl;

	for (int i{ 0 }; i < 3; i++)
	{
		delete insects[i];
		insects[i] = NULL;
	}

	cout << endl << endl;

	system("pause");
	return 0;
}





