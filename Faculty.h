#ifndef FACULTY_H
#define FACULTY_H

#include "Employee.h"
#include "Education.h"
#include <iostream>


class Faculty : public Employee {
public:
    enum Level { AS, AO, FU };

private:
    Level level;
    Education edu;

public:
    Faculty(string fName = "", string lName = "", string id = "",
            Level lvl = AS, Education ed = Education());
    void putData() override;
    double monthlyEarning() override;
};

#endif
