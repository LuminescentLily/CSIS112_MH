#include "Doctor.h"
#include <string>
#include <iostream>


Doctor::Doctor()
//default constructor
{
	docName = "Dr. Enter Name";
}

Doctor::Doctor(std::string doc)
//constructor to catch and assign the doctor's name to the docName variable
{
	docName=doc;
}

void Doctor::addPatient(std::string n)
//function to catch the patient's name and pass it to the Patient class constructor
//function also calls the addCholesterol function from Patient
//adds the patient records just entered to the patientList vector
{
	Patient p(n);
	p.addCholesterol();
	patientList.push_back(p);
}

void Doctor::printPatients()
//calls the Patient print function and prints all the patient recorded
{
	std::cout << "Dr. " << docName << "'s list of current patients.\n";
	for (Patient p : patientList)
	{
		p.printPatient();
	}
}

void Doctor::setDocterName(std::string doc)
//assigns an inputted string to docName
{
	docName = doc;
}

std::string Doctor::getDoctorName()
//returns docName
{
	return docName;
}

int Doctor::patientSize()
//returns the size of the patientList vector
{
	return patientList.size();
}

