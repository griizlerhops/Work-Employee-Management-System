#ifndef STAFF_H
#define STAFF_H
#include "Employee.h"

using namespace std;


class Staff : public Employee {
protected:
    double hourlyRate;

public:
    Staff(string fName = "", string lName = "", string id = "", double rate = 0);
    void putData() override;
    double monthlyEarning() override;
};

#endif
