#include "Pets.h"
#include <iostream>


Pets::Pets()
//default constructor
{ 
	std::cout << "Creating a new pet..." << std::endl;
}

Pets::~Pets() /*deconstructor*/ { std::cout << "In the Pet destructor" << std::endl; }

void Pets::setName(std::string p)
//sets the name on the pet to the string passed into it
{
	petName = p;
}
void Pets::setType(std::string t)
//sets the type of the animal with the string passed in
{
	animalType = t;
}
void Pets::setWeight()
//generates a random number and sets it as the weight
{
	weight = rand() % 101;
}

std::string Pets::getName() const
//returns the pet's name
{
	return petName;
}
std::string Pets::getType() const
//returns the animal type of the pet
{
	return animalType;
}
double Pets::getWeight() const
//return the weight
{
	return weight;
}