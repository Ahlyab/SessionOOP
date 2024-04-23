#pragma once
#include <string>
using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
    
public:
    static int objectCount; // declare
    static void print_active_accounts(); // declare
    // constructors
    Account(string name = "NA", double balance = 0.00);
    // copy constructor
    Account(Account& source);
    // getter methods
    string get_name();
    double get_balance();

    // setter methods
    void set_name(string name);
    void set_balance(double balance);

    void print_details();

    virtual bool deposit(const double& amount);

    virtual bool widthdraw(const double& amount);

    ~Account();

    Account getInstance();

    friend double taxCalculator(Account& acc);

    // operator overloading
    friend ostream &operator<<(ostream &os, const Account& obj);
    friend istream &operator>>(istream &is, Account& obj);

};