#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff(string fName, string lName, string id, double rate)
    : Employee(fName, lName, id), hourlyRate(rate) {}

void Staff::putData() {
    Employee::putData();
    cout << "Full Time" << endl;
    cout << "Monthly Salary: " << monthlyEarning() << endl;
}

double Staff::monthlyEarning() {
	const double STAFF_MONTHLY_HOURS_WORKED = 160;
    return hourlyRate * STAFF_MONTHLY_HOURS_WORKED;
}

