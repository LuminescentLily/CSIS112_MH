#pragma once
#include "Date.h"
#include <iostream>
#include <iomanip>


class Security
{
public:
	Security();					//default constructor
	~Security();				//deconstructor

	void setPrice(double);		//sets the price
	void setQuantity(int);		//sets the quantity

	void setDate(Date d);		//sets the passed in Date object to date
	void getDate() const;		//prints out date

	double getPrice() const;	//returns the price
	int getQuantity() const;	//returns the quantity

private:
	Date date;					//a Date object
	double price;				//holds the price
	int quantity;				//holds the quantity

};