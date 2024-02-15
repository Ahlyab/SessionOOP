/*
    how we create class?
    syntax :
        class ClassName {
            // attribute / data member

            // functions / method
        };

        class Student {
            string name;
            int rollNo;
            float cgpa;
        };

    how we create object?
        syntax:
            ClassName objectName;

    access specifier:
        1. public
        2. private
        3. protected -> inheritance

        public:
        ---------
        --------
        -------
        -------
        -------

    methods:
        1. getter function -> returns values
        2. setter function -> set value to a variable
--------------------------------------------------------------
    this pointer : a pointer that refers to current object

    constructor: A type of function with no return type used to contruct object and
                intialize attributes.
                it has same name as Class name.
                it can take parameters or no parameters at all


    Constructors:
        default constructor
        no args contructor
        parameterized constructors
        extended list initializer
        default parameters
        destructors


----------------------------------------------------------------------------------------------------------------------
    ClassName(para1 = value, param2 = value) {
        //body
    }
----------------------------------------------------------------------------------------------------------------------
    copy constructor :  a constructor that builds a copy of object
        shallow copy contructor - directly copy values
        deep copy construtor - allocate separate space on heap for dynamic memory
    move constructor
    static members : members shared by every object of same type
    friend functions

----------------------------------------------
Inheritance -> basic
how to derive a class
how to do constructor chaining
calling parent class function in child class while overidding 
DRY principle


*/

/*
        best practices
    1. start class name with capital letter
    2. always keep class attributes private


    OOP -> Object oriented programming
    4 pillars
        1. Abstraction
        2. Encapsulation
        3. Inheritance
        4. Polymorphism
*/
#include <iostream>
#include <string>
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
using namespace std;

/*
int main() {
    string name;
    double balance;

    cout << "Enter account holder name : ";
    getline(cin, name);

    cout << "Enter your initial account Balance : ";
    cin >> balance;

    Account account(name, balance);

    int choice = 0;

    do {
        cout << "Select operation" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Exit \n>>  ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter your amount : ";
                cin >> balance;

                if (account.widthdraw(balance)) {
                    cout << "Successfully withdrawn  - current balance : " << account.get_balance() << endl;
                }
                else {
                    cout << "Failed to  withdraw  - current balance : " << account.get_balance() << endl;
                }
                break;
            case 2:
                cout << "Enter your amount : ";
                cin >> balance;

                if (account.deposit(balance)) {
                    cout << "Successfully deposited  - current balance : " << account.get_balance() << endl;
                }
                else {
                    cout << "Failed to  deposit  - current balance : " << account.get_balance() << endl;
                }
                break;
            case 3: break;
            default :
                cout << "Invalid choice!" << endl;

        }

    } while (choice != 3);
}
*/



int main() {
    TrustAccount acc("Tayl", 2000);

    acc.deposit(50000);
    acc.print_details();
    
    acc.widthdraw(19000);
    acc.print_details();

    return EXIT_SUCCESS;
}

/*
program interface
multi inheritance
*/