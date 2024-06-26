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
#include "AccountUtility.h"
using namespace std;


int main() {
    
    string name;
    double balance;
    Account* account = nullptr;

    AccountUtility accountUtility;

    int choice = accountUtility.displayAccountCreationOptions();
    if (choice != -1) {
        accountUtility.takeUserInputForAccountCreation(name, balance);
        account = accountUtility.getChoosenAccount(name, balance, choice);
    }
    else {
        cout << "InValid Choice!" << endl;
        return EXIT_SUCCESS;
    }
    
    if (account != nullptr) {
        do {
            choice = accountUtility.displayAccountActions();
            accountUtility.processAction(account, choice);

        } while (choice != 3);
    }

    delete account;
    
}



/*
operator overloading
polymorphism
abstract classes
dervided class to base class pointer

*/