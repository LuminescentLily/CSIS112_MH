#include "Security.h"

Security::Security()
//default constructor
{ std::cout << "Security Constructor." << std::endl; }
Security::~Security(){}		//deconstructor

void Security::setPrice(double p)
//sets the price
{
	price = p;
}
void Security::setQuantity(int q)
//sets the quantity
{
	quantity = q;
}

void Security::setDate(Date d)
//sets the passed in Date object to date
{
	date = d;
}

void Security::getDate() const
//prints out date
{
	std::cout << date;
}
double Security::getPrice() const
//returns the price
{
	return price;
}
int Security::getQuantity() const
//returns the quantity
{
	return quantity;
}