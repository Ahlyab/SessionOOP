#include "TrustAccount.h"


TrustAccount::TrustAccount(string name, double balance, double interestRate, int withdraws) 
	: Account(name, balance + (balance * interestRate / 100)), interestRate{ interestRate }, withdraws{ withdraws } {
}


bool TrustAccount::deposit(const double& amount)
{
	double total_amount = amount;
	
	if (amount >= 50000) {
		total_amount += 50;
	}
	return Account::deposit(total_amount + (total_amount * interestRate / 100));
}

bool TrustAccount::widthdraw(const double& amount) {
	if (withdraws <= 3 && amount <= get_balance() * 0.2) {
		++withdraws;
		return Account::widthdraw(amount);
	}
	return false;
}