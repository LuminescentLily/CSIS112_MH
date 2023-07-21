#pragma once
#include <algorithm>
#include "Security.h"
#include <string>
#include <iostream>


class Stock : public Security
{
	friend std::ostream& operator<<(std::ostream&, Stock);		//overloaded the cout to output all the information formatted

public:
	Stock();									//default constructor
	~Stock();									//destructor

	void setTicker(std::string);				//sets ticker
	void setValue(int);							//sets the par value
	void setType(char);							//sets the stock type
	void setShares(double);						//sets the dividends per share

	std::string getTicker() const;				//returns the ticker
	int getValue() const;						//returns the value
	std::string getType() const;				//returns the type
	double getShares() const;					//returns the shares

	double getPriceShare();						//calculates and returns the price per share
	double calcIncome();						//calculates and returns the total price
	void printStocks(Stock s);					//prints all the information in stocks that was overloaded

	bool operator<(const Stock& s) const;		//overloads < to compare the current ticker verse the passed in ticker

private:
	std::string ticker;							//holds the ticker
	int parValue;								//hold the par value
	enum stockType { Common, Preferred };		//used to assign Common or Preferred to type
	stockType type;								//holds the type of the stock
	double share, pShare;						//holds -the dividend per share, -the price per share
};
