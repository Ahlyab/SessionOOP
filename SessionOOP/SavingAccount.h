#pragma once
#include "Account.h"
// class DerivedClassName : AccessModifer BaseClassName
class SavingAccount : public Account
{
private:
	double interest_rate;
public:
	SavingAccount(string name, double balance, double interest_rate = 0.03);
	bool deposit(const double& amount);
};

