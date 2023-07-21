#include "Pets.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int petNum;															//variable used to read in the number of pets owed by the user
	string petName, petType;											//variables used to read in the pet name and pet type entered by the user
	Pets* p;															//pointer of Pets objects

	cout << "How many pets do you have? Then type enter." << endl;
	cin >> petNum;														//reads in the number of pets that will be entered
	while (cin.fail() || petNum < 0)									//Bullet proofing
	{
		cout << "You must enter a number, " 
			<< "and that number must be positive. "
			<< "Please try again. " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> petNum;
	}cout << endl;

	Pets** petArray = new Pets*[petNum];								//creates an array big enough to hold all the pet objects

	for (int i{ 0 }; i < petNum; i++)									//users inputs the inforamtion and it gets set and saved to the petArray
	{

		cout << "Please enter the name of your pet: " << endl;
		cin >> petName;
		cout << "Now enter what kind of pet you have." << endl;
		cin >> petType;

		p = new Pets();

		p->setName(petName);

		p->setType(petType);

		p->setWeight();

		petArray[i] = p;
		cout << endl;

	}

	cout << "This is the list of the pets entered:" << endl;			//prints out the information stored 
	for (int i{ 0 }; i < petNum; i++)
	{
		cout << "Pet's Name: " << (*petArray[i]).getName() << endl;
		cout << "Pet's Type: " << (*petArray[i]).getType() << endl;
		cout << "Pet's Weight: "<<(*petArray[i]).getWeight()<<endl;
		cout << endl;											
	}

	for (int i{ 0 }; i < petNum; i++)									//deletes and sets the Pets pointer to NULL
	{
		delete petArray[i];
		petArray[i] = NULL;												
	}

	delete[] petArray;													//deletes the petArray array pointer
	petArray = NULL;													//sets petArray to NULL
	

	system("pause");													//pauses the program
	return 0;															//ends the program
}
