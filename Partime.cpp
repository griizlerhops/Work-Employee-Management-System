#include "Partime.h"

using namespace std;

Partime::Partime(string fName, string lName, string id, double rate, double hours)
    : Staff(fName, lName, id, rate), hoursWorkedPerWeek(hours) {}

void Partime::putData() {
    Employee::putData();
    cout << "Hours work per month: " << hoursWorkedPerWeek * 4 << endl;
    cout << "Monthly Salary: " << monthlyEarning() << endl;
}

double Partime::monthlyEarning() {
    return hourlyRate * hoursWorkedPerWeek * 4;
}


