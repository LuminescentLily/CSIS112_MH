#include "Bond.h"


Bond::Bond()
//default constructor
{ std::cout << "Bond Constructor" << std::endl; }
Bond::~Bond(){}		//deconstructor

void Bond::setIssuer(std::string i)
//sets the issuer
{
	issuer = i;
}
void Bond::setValue(int v)
//sets the face value
{
	faceValue = v;
}
void Bond::setInterest(double i)
//sets the interest rate
{
	interestRate = i;
}
void Bond::setMaturity(Date m)
//sets the passed in Date objects to maturityDate
{
	maturityDate = m;
}

std::string Bond::getIssuer() const { return issuer; }			//returns the issuer
int Bond::getValue() const { return faceValue; }				//returns the face value
double Bond::getInterest() const { return interestRate; }		//returns the interest rate
void Bond::getMaturity() const { std::cout<< maturityDate; }	//prints out the maturity date

double Bond::calcIncome()
//calculates and returns the total price
{
	double income;
	income = getQuantity() * getValue() * getInterest();

	return income;
}

void Bond::printBonds(Bond b)
//prints all the information in bond that was overloaded
{
	std::cout << b << std::endl;
}

bool Bond::operator<(const Bond& b) const
//overloads < to compare the current issuer verse the passed in issuer
{
	if (strcmp(getIssuer().c_str(), b.getIssuer().c_str()) <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::ostream& operator<<(std::ostream& output, Bond b)
//overloaded the cout to output all the information formatted
{
	output << "Issuer:" << "\t\t\t\t\t" << b.getIssuer() << std::endl;

	output << "Purchase date:" << "\t\t\t\t";
	b.getDate();
	output << std::endl;

	output << "Quantity:" << "\t\t\t\t" << b.getQuantity() << std::endl;

	output << "Total Purchase Price:" << "\t\t\t" << std::fixed 
		<< std::showpoint << std::setprecision(2) << b.getPrice() << std::setw(20)
		<< "Face Value:" << "\t\t" << std::fixed << std::showpoint 
		<< std::setprecision(2) << b.getValue() << std::endl;

	output << "Stated Interest Rate:" << "\t\t\t" << std::fixed
		<< std::showpoint << std::setprecision(2) << b.getInterest() << std::setw(23)
		<< "Maturity Date:" << "\t\t";
	b.getMaturity();
	output << std::endl;

	output << "Interest Income:" << "\t\t\t" << std::fixed
		<< std::showpoint << std::setprecision(2) << b.calcIncome() << std::endl;
	
	return output;
}


