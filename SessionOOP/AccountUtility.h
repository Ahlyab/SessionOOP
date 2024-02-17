#pragma once
#include <string>
#include <iostream>
#include "Account.h"
#include "SavingAccount.h"
#include "TrustAccount.h"
#include "CheckingAccount.h"
using namespace std;

class AccountUtility
{
public:
	int displayAccountActions();
	void takeUserInputForAccountCreation(string& name, double& balance);
	int displayAccountCreationOptions();
	Account* getChoosenAccount(string name, double balance, int choice);
	void processAction(Account* account, int choice);
};

