#pragma once
#include "Bond.h"
#include "Stock.h"
#include <vector>
#include <string>
#include "Date.h"
#include <iostream>
#include <algorithm>
#include <cctype>


class Portfolio
{
public:
	Portfolio(std::string);				//default constructor
	~Portfolio();						//destructor

	void puchaseBonds();				//function calls all the required functions to purchase bonds
	void puchaseStocks();				//function calls all the required functions to purchase stocks

	void sortBonds();					//sorts the vector that holds the bond objects
	void sortStocks();					//sorts the vector that holds the stock objects

	void print();						//goes through both vectors and prints out all the information saved to them
										//also calls the sort functions
private:
	std::string name;					//holds the portfolio name
	std::vector<Bond> bondList;			//holds bond objects
	std::vector<Stock> stockList;		//holds stock objects
};