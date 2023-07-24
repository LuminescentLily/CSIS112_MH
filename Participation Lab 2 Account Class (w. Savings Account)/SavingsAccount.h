#pragma once
#include "Account.h"

class SavingsAccount : public Account
{
public:
	SavingsAccount(double, double);
	~SavingsAccount();

	double calculateInterest();

private:
	double interestRate;

};