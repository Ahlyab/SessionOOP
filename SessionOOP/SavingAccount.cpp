#include "SavingAccount.h"

SavingAccount::SavingAccount(string name, double balance, double interest_rate)
    :Account(name, balance + (interest_rate * balance)), interest_rate{interest_rate} {
}

bool SavingAccount::deposit(const double& amount)
{
    if (amount < 0) {
        return false;
    }
    double temp = get_balance() +  amount + (amount * interest_rate);
    set_balance(temp);
    return true;
}
