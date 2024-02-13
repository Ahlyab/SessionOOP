#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(string name, double balance, double fee)
	:Account(name, balance), fee{fee} {
}

bool CheckingAccount::widthdraw(const double& amount)
{
	return Account::widthdraw(amount + fee);
}
