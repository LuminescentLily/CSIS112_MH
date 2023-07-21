#include <iostream>
#include "Doctor.h"
#include <string>

using namespace std;

int main()
{
	string n;
	string doc;
	char input;
	
	cout << "Please enter the doctor's name: " << endl;											//asks the user to enter the doctor's name
	getline(cin, doc);
	Doctor d(doc);


	std::cout << "Enter A to add a patient." << std::endl;										//beginning of the option menu readout
	std::cout << "Enter L to list the current patients, if any." << std::endl;
	std::cout << "Enter Q to exit the whole program." << std::endl;
	std::cin >> input;
	cout << endl;
	while (input != 'Q')																		//beginning of the loop to apply the users choice
	{
		switch (input)
		{
		case 'A':
			if (d.patientSize() < 3)															//checks to see how many patients are already recorded
			{
				cout << "Please enter the first name of the patient: " << endl;					//section to add a new patient's name and cholesterol readings
				cin >> n;
				d.addPatient(n);
				break;
			}
			else
			{
				std::cout << "There is no room for anymore patients, sorry." << std::endl;		//if the user tries to enter more than 3 patients' records
				break;
			}

		case 'L':
			d.printPatients();																	//outputs the list of patients recorded
			break;

		case 'Q':
			cout << "Thank you for your time." << endl;											//thanks the user then exits the program
			system("pause");
			return 0;

		default:
			break;
		}
		cout << endl<<"Would you like to do something else?"									//repeated option menu in case the user has forgotten the options
			<< " The options are: \nA, to add a patient, "										//or would like to enter in another patient
			<<"\nL, to list any current patients"
			<< ", \nand Q to quit the program." << endl;
		std::cin >> input;
		cout << endl;
	}



	cout << "Thank you for your time." << endl;													//in case the user inputs Q first
	system("pause");
	return 0;
}
