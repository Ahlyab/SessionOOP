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

    bool deposit(const double& amount);

    bool widthdraw(const double& amount);

    ~Account();

    Account getInstance();

};