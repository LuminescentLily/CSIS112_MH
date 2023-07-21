#include <iostream>
#include <string>
#include "Patient.h"


Patient::Patient()
//default constructor
{
	name = "EMPTY";
}

Patient::Patient(std::string n)
//constructor to catch the patient's name
{
	name = n;
}

void Patient::addCholesterol()
//adds the values entered by the user to the cholReadings vector
{
	int c;
	std::cout << "Please enter up to 5 cholesterol readings. {Enter 0 to quit if you do not have five.}" << std::endl;
	for (int i{ 0 }; i < 5; ++i)
	{
		std::cin >> c;
		if (c != 0)
		{
			cholReadings.push_back(c);
		}
		else
		{
			i = 5;
		}
	}
}

int Patient::getCholesterol(int i)
//returns a value from cholesterol; this should be used in a loop to return multiple values
{
	return cholReadings[i];
}

void Patient::printPatient()
//prints out everything in the vector
{
	std::cout << "Patient: " << name << std::endl;
	for (int i{ 0 }; i < cholReadings.size(); ++i)					
	{
		std::cout << getCholesterol(i) << std::endl;
	}
}

