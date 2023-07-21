#pragma once
#include <array>
#include <string>


class Pets
{
public:
	Pets();								//default constructor
	~Pets();							//deconstructor

	void setName(std::string p);		//sets the name on the pet to the string passed into it
	void setType(std::string t);		//sets the type of the animal with the string passed in
	void setWeight();					//generates a random number and sets it as the weight

	std::string getName() const;		//returns the pet's name
	std::string getType() const;		//returns the animal type of the pet
	double getWeight() const;			//return the weight


private:
	std::string petName;				//holds the pet's name
	std::string animalType;				//holds the pet's animal type
	double weight;						//holds the weight

};