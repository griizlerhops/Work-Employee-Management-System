#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee {
protected:
    string lastName;
    string firstName;
    string ID;

public:
    Employee(string fName = "", string lName = "", string id = "");
    virtual void putData();
    virtual double monthlyEarning() = 0;
};

#endif
