#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
	// it takes 1.5$ per transaction
	private:
		double fee;
	public:
		CheckingAccount(string name, double balance, double fee = 1.5);
		bool widthdraw(const double &amount);

};

