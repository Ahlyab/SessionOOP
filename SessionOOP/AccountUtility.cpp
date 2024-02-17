#include "AccountUtility.h"

int AccountUtility::displayAccountActions()
{
	int choice = 0;
	cout << "Select your desired Action" << endl;
	cout << "1. Withdraw" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Quit" << endl;
	cout << ">> ";

	cin >> choice;

	return (choice > 0 && choice < 4) ? choice : -1;
}

void AccountUtility::takeUserInputForAccountCreation(string& name, double& balance)
{
	cout << "Enter Account Title : ";
	cin.ignore();
	getline(cin, name);

	cout << "Enter Balance to open account : ";
	cin >> balance;
}

int AccountUtility::displayAccountCreationOptions()
{
	int choice = 0;
	cout << "Select your desired Account" << endl;
	cout << "1. Savings Account" << endl;
	cout << "2. Checking Account" << endl;
	cout << "3. Trust Account" << endl;
	cout << ">> ";

	cin >> choice;

	return (choice > 0 && choice < 4)? choice : -1;

}

Account* AccountUtility::getChoosenAccount(string name, double balance, int choice)
{
	switch (choice)
	{
	case 1:
		return new SavingAccount(name, balance);
		break;
	case 2:
		return new CheckingAccount(name, balance);
	case 3:
		return new TrustAccount(name, balance);
	default:
		break;
	}
	return nullptr;
}

void AccountUtility::processAction(Account* account, int choice)
{
	double balance = 0.0;
	switch (choice) {
	case 1:
		cout << "Enter your amount : ";
		cin >> balance;

		if (account->widthdraw(balance)) {
			cout << "Successfully withdrawn  - current balance : " << account->get_balance() << endl;
		}
		else {
			cout << "Failed to  withdraw  - current balance : " << account->get_balance() << endl;
		}
		break;
	case 2:
		cout << "Enter your amount : ";
		cin >> balance;

		if (account->deposit(balance)) {
			cout << "Successfully deposited  - current balance : " << account->get_balance() << endl;
		}
		else {
			cout << "Failed to  deposit  - current balance : " << account->get_balance() << endl;
		}
		break;
	case 3: break;
	default:
		cout << "Invalid choice!" << endl;

	}
}

