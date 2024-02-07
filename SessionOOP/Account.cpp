#include "Account.h"
#include <iostream>
using namespace std;

Account::~Account() {}

bool Account::widthdraw(const double& amount) {
    if (amount < 0 || amount > balance) {
        return false;
    }
    balance -= amount;
    return true;
}

Account Account::getInstance() {
    return *this;
}

bool Account::deposit(const double& amount) {
    if (amount < 0) {
        return false;
    }
    balance += amount;
    return true;
}

void Account::print_details() {
    cout << "Name : " << this->name << endl;
    cout << "Balance : " << this->balance << endl;
}


string Account::get_name() {
    return name;
}

double Account::get_balance() {
    return balance;
}

// setter methods
void Account::set_name(string name) {
    this->name = name;
}

void Account::set_balance(double balance) {
    this->balance = balance;
}


// constructors
Account::Account(string name = "NA", double balance = 0.00)
    :name{ name }, balance{ (balance < 0) ? 0.00 : balance } {
    //cout << "contructor called for  - " << name << endl;
}

// copy constructor
Account::Account(Account& source) {
    cout << "copy constructor called!" << endl;

    this->name = source.name;
    this->balance = source.balance;
}

