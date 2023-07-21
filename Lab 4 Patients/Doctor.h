#pragma once
#include <string>
#include <vector>
#include "Patient.h"

class Doctor
{
public:
	Doctor();										//default constructor
	Doctor(std::string doc);						//constructor to catch and assign the doctor's name to the docName variable
	void setDocterName(std::string doc);			//assigns an inputted string to docName
	std::string getDoctorName();					//returns docName

	void addPatient(std::string n);					//function to catch the patient's name and pass it to the Patient class constructor
													//function also calls the addCholesterol function from Patient
													//adds the patient records just entered to the patientList vector
	int patientSize();								//returns the size of the patientList vector
	void printPatients();							//calls the Patient print function and prints all the patient recorded

private:
	std::vector<Patient> patientList;				//vecter to hold all the patients records
	std::string docName;							//variable to hold the doctor's name

};