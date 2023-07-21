#pragma once
#include <algorithm>
#include "Security.h"
#include <string>
#include <iostream>
#include <iomanip>


class Bond : public Security
{
	friend std::ostream& operator<<(std::ostream&, Bond);		//overloaded the cout to output all the information formatted

public:
	Bond();									//default constructor
	~Bond();								//deconstructor

	void setIssuer(std::string);			//sets the issuer
	void setValue(int);						//sets the face value
	void setInterest(double);				//sets the interest rate
	void setMaturity(Date);					//sets the passed in Date objects to maturityDate

	std::string getIssuer() const;			//returns the issuer
	int getValue() const;					//returns the face value
	double getInterest() const;				//returns the interest rate
	void getMaturity() const;				//prints out the maturity date

	double calcIncome();					//calculates and returns the total price
	void printBonds(Bond b);				//prints all the information in bond that was overloaded

	bool operator<(const Bond& b) const;	//overloads < to compare the current issuer verse the passed in issuer

private:
	std::string issuer;						//holds the issuer
	int faceValue;							//holds the face value
	double interestRate;					//holds the interest rate
	Date maturityDate;						//a date object

};