#include "Stock.h"

Stock::Stock() //default constructor
{ std::cout << "Stock Constructor" << std::endl; }
Stock::~Stock(){}	//destructor

void Stock::setTicker(std::string t)
//sets ticker
{
	ticker = t;
}
void Stock::setValue(int v)
//sets the par value
{
	parValue = v;
}
void Stock::setType(char t)
//sets the stock type
{
	if (t == 'C')
	{
		type = Common;
	}
	else if (t == 'P')
	{
		type = Preferred;
	}
		
}
void Stock::setShares(double s)
//sets the dividends per share
{
	share = s;
}

std::string Stock::getTicker() const { return ticker; }		//returns the ticker
int Stock::getValue() const { return parValue; }			//returns the value
std::string Stock::getType() const 
//returns the type
{
	if (type == Common)
	{
		return "Common";
	}
	else
	{
		return "Preferred";
	}
}
double Stock::getShares() const { return share; }			//returns the shares

double Stock::getPriceShare()
//calculates and returns the price per share
{
	pShare = getQuantity() / getPrice();
	return pShare;
}

double Stock::calcIncome()
//calculates and returns the total price
{
	int income;
	income = parValue * share;

	return income;
}

void Stock::printStocks(Stock s)
//prints all the information in stocks that was overloaded
{
	std::cout << s <<std::endl;
}

bool Stock::operator<(const Stock& s) const
//overloads < to compare the current ticker verse the passed in ticker
{
	if (strcmp(getTicker().c_str(), s.getTicker().c_str()) <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::ostream& operator<<(std::ostream& output, Stock s)
//overloaded the cout to output all the information formatted
{
	output << "Ticker Symbol:" << "\t\t\t\t" << s.getTicker() << std::endl;

	output << "Purchase Date:" << "\t\t\t\t";
	s.getDate();
	output << std::endl;

	output << "Total Price:" << "\t\t\t\t" << std::fixed
		<< std::showpoint << std::setprecision(2) << s.getPrice() << std::endl;

	output << "Quantity of Shares:" << "\t\t\t" << s.getQuantity() 
		<< std::setw(33) << "Price Per Share:" << "\t" << std::fixed 
		<< std::showpoint << std::setprecision(2) << s.getPriceShare() << std::endl;

	output << "Par Value:" << "\t\t\t\t" << s.getValue() << std::setw(23)
		<< "Type:" << "\t\t" << s.getType() << std::endl;

	output << "Dividends Per Share:" << "\t\t\t" << std::fixed
		<< std::showpoint << std::setprecision(2) << s.getShares() << std::endl;

	output << "Dividend Income:" << "\t\t\t" << std::fixed
		<< std::showpoint << std::setprecision(2) << s.calcIncome() << std::endl;


	return output;
}
