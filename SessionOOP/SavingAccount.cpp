#include "SavingAccount.h"

SavingAccount::SavingAccount(string name, double balance, double interest_rate)
    :Account(name, balance + (interest_rate * balance)), interest_rate{interest_rate} {
}

bool SavingAccount::deposit(const double& amount)
{
    return Account::deposit(amount + (amount * interest_rate));
}
