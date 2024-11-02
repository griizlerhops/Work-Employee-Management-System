#include "Faculty.h"


Faculty::Faculty(string fName, string lName, string id, Level lvl, Education ed)
    : Employee(fName, lName, id), level(lvl), edu(ed) {}

void Faculty::putData() {
    Employee::putData();
    string levelStr = (level == AS ? "Assistant" : (level == AO ? "Associate" : "Full"));
    cout << levelStr << " Professor" << endl;
    cout << "Monthly Salary: " << monthlyEarning() << endl;
}

double Faculty::monthlyEarning() {
	const double FACULTY_MONTHLY_SALARY = 5000.00;
    switch (level) {
        case AS:
            return FACULTY_MONTHLY_SALARY;
        case AO:
            return FACULTY_MONTHLY_SALARY * 1.2;
        case FU:
            return FACULTY_MONTHLY_SALARY * 1.4;
        default:
            return 0;
    }
}

