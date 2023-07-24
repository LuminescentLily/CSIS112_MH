#include "SavingsAccount.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// constructor initializes balance and transaction fee
SavingsAccount::SavingsAccount(double initialBalance, double intRate)
	: Account(initialBalance), interestRate(0.0) { // initialize base class
	if (intRate >= 0.0) {
		interestRate = intRate;
	}
	else {
		throw invalid_argument("Transaction fee must be >= 0.0");
	}
}

SavingsAccount::~SavingsAccount()
{
	cout << "Here I am! Far from home!" << endl;
}

// subtract transaction fee
double SavingsAccount::calculateInterest() {
	return getBalance() * interestRate;
}
