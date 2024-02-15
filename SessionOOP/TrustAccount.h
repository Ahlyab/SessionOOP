#pragma once
#include "Account.h"
/*
1. 50 usd bonus if deposit amount is greater than 50k usd 
2. you are only allowed 3 withdraws
3. you get interest over your deposited money
4. you can only withdraw at max 20% of your balance


*/
class TrustAccount : public Account 
{
private:
	int withdraws;
	double interestRate;
public:
	TrustAccount(string name = "NA", double balance = 0.00, double interestRate = 0.04, int withdraws = 3);
	bool deposit(const double& amount);
	bool widthdraw(const double& amount);
};

