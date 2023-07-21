#pragma once
#include <string>
#include <vector>

class Patient
{
public:
	Patient();									//default constructor
	Patient(std::string n);						//constructor to catch the patient's name
	void printPatient();						//prints out everything in the vector

	void addCholesterol();						//adds the values entered by the user to the cholReadings vector
	int getCholesterol(int i);					//returns a value from cholesterol; this should be used in a loop to return multiple values

private:
	std::vector<int> cholReadings;				//vector to hold the cholesterol values read in from the client code
	std::string name;							//variable to hold the patient's name

};