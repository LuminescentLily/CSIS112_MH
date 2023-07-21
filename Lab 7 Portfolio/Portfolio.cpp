#include "Portfolio.h"


Portfolio::Portfolio(std::string p = "Empty Name")
//default constructor
{ name = p; }
Portfolio::~Portfolio(){}	//destructor

void Portfolio::puchaseBonds()
//function calls all the required functions to purchase bonds
{
	Date d;
	Bond b;
	int q, v;
	double r, p;
	std::string i;

	d.someFunction();						//sets the date using the Date class functions
	b.setDate(d);

	std::cout << "Total purchase price: ";
	std::cin >> p;
	b.setPrice(p);

	std::cout << "Quantity purchased: ";
	std::cin >> q;
	b.setQuantity(q);

	std::cout << "Issuer: ";
	std::cin >> i;
	b.setIssuer(i);

	std::cout << "Face Value: ";
	std::cin >> v;
	b.setValue(v);

	std::cout << "Stated interest rate: ";
	std::cin >> r;
	b.setInterest(r);

	std::cout << "Maturity date: ";
	d.someFunction();
	b.setMaturity(d);

	bondList.push_back(b);

}
void Portfolio::puchaseStocks()
//function calls all the required functions to purchase stocks
{
	Date d;
	Stock s;
	int q, v;
	double p, sh;
	char type;
	std::string ticker;

	d.someFunction();						//sets the date using the Date class functions
	s.setDate(d);

	std::cout << "Total purchase price: ";
	std::cin >> p;
	s.setPrice(p);

	std::cout << "Quantity purchased: ";
	std::cin >> q;
	s.setQuantity(q);

	std::cout << "Ticker symbol: ";
	std::cin >> ticker;
	s.setTicker(ticker);

	std::cout << "Par Value: ";
	std::cin >> v;
	s.setValue(v);

	std::cout << "Stock type (C for Common or P for Preferred): ";
	std::cin >> type;
	type = toupper(type);					//makes the type uppercase in case the user entered a lower case
	s.setType(type);

	std::cout << "Dividends per share: ";
	std::cin >> sh;
	s.setShares(sh);

	stockList.push_back(s);
}

void Portfolio::sortBonds()
//sorts the vector that holds the bond objects
{
	sort(bondList.begin(), bondList.end());
}
	
void Portfolio::sortStocks()
//sorts the vector that holds the stock objects
{
	sort(stockList.begin(), stockList.end());
}

void Portfolio::print()
//goes through both vectors and prints out all the information saved to them
//also calls the sort functions
{
	sortBonds();
	sortStocks();
	std::cout << "These are the BONDS in your " << name 
		<< " portfolio:" << std::endl;
	for (Bond b : bondList)
	{
		b.printBonds(b);
	}

	std::cout << "These are the STOCKS in your " << name 
		<< " portfolio:" << std::endl;
	for (Stock s : stockList)
	{
		s.printStocks(s);
	}
}