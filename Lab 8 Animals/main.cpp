#include "Animal.h"										//lots of included material
#include "Dog.h"
#include "Rabbit.h"
#include "Snake.h"
#include "Fish.h"
#include <iostream>
#include <array>
#include <random>

using namespace std;

int main()
{
	srand(100);											//seeds the random number generator
	Animal* animals[5];									//array of Animal pointers
	int choice;											//holds the user input for which animal
	string name;										//holds the name of the animal
	double ranNum;										//holds the random number


	for (int i{ 0 }; i < 5; i++)
	{
		cout << "Main Menu" << endl;					//Animal menu
		cout << "1 - Dog" << endl;
		cout << "2 - Rabbit" << endl;
		cout << "3 - Fish" << endl;
		cout << "4 - Snake" << endl;
		cout << "Selection: ";
		cin >> choice;
		cout << endl;

		while (choice < 1 || choice > 4 || cin.fail())
		//Bullet proofing
		{
			cout << "You must enter one of the numbers above. Please try again. " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Clear the input buffer 
			cin >> choice;
			cout << endl;
		}


		cout << "Enter the name of the animal: ";
		cin >> name;

		switch (choice)									//switch statement to set the age and name in the right animal derived class pointer
		{
		case 1:
			ranNum = (rand() % 20) + 1;
			animals[i] = new Dog(ranNum, name);
			break;

		case 2:
			ranNum = (rand() % 20) + 1;
			animals[i] = new Rabbit(ranNum, name);
			break;

		case 3:
			ranNum = (rand() % 20) + 1;
			animals[i] = new Fish(ranNum, name);
			break;

		case 4:
			ranNum = (rand() % 20) + 1;
			animals[i] = new Snake(ranNum, name);
			break;
		}
		cout << endl;

	}

	cout << endl;

	for (int i{ 0 }; i < 5; i++)						//loop to print all the information collected
	{
		cout << "My name is " << animals[i]->getName()
			<< ", and I am " << animals[i]->getAge()
			<< " years old." << endl;
		animals[i]->Move();
		cout << endl;
	}

	cout << endl;

	for (int i{ 0 }; i < 5; i++)
	{
		delete animals[i];								//deletes the information saved within the pointers
		animals[i] = NULL;								//sets the pointers to NULL
	}

	system("pause");
	return 0;
}
