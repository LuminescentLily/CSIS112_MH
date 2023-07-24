#pragma once
#include <iostream>

class Animal
{
public:
	Animal(int a = 0)
	//default constructor
	{
		age = a;
		std::cout << "Invoking the default Animal constructor" << std::endl;
	}
	Animal(int a, std::string n)
	//2-argument constructor used by the derived classes
	{
		age = a;
		name = n;
		std::cout << "Invoking the 2-argument Animal constructor" << std::endl;
	}
	virtual ~Animal() /*default deconstructer*/ { std::cout << "Invoking the default Animal deconstructor" << std::endl; };

	int setAge(int a) /*sets the age*/ { age = a; }
	std::string setName(std::string n) /*sets the name*/ { name = n; }

	int getAge() const /*returns the age*/ { return age; }
	std::string getName() const /*returns the name*/ { return name; }

	virtual void Move() /*pure void function*/ const = 0;


private:
	std::string name;	//holds the name
	int age;			//holds the age
};



