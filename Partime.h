#ifndef PARTIME_H
#define PARTIME_H 

#include "Staff.h"

class Partime : public Staff {
private:
    double hoursWorkedPerWeek;

public:
    Partime(string fName = "", string lName = "", string id = "", double rate = 0, double hours = 0);
    void putData() override;
    double monthlyEarning() override;
};

#endif
