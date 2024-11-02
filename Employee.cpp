#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string fName, string lName, string id)
    : firstName(fName), lastName(lName), ID(id) {}

void Employee::putData() {
    cout << "ID Employee number: " << ID << endl;
    cout << "Employee name: " << lastName << " " << firstName << endl;
}
