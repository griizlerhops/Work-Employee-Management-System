#include <iostream>
#include <string>
#include <typeinfo>
#include "Employee.h"
#include "Staff.h"
#include "Faculty.h"
#include "Partime.h"

using namespace std;

int main() {
    Employee *emp[9];
    int n = 0;

    // Creating instances of various employees using dynamic memory allocation
    emp[n++] = new Staff("Allen", "Paita", "123", 50.00);
    emp[n++] = new Staff("Zapata", "Steven", "456", 35.00);
    emp[n++] = new Staff("Rios", "Enrique", "789", 40.00);

    Education ed1("Ph.D", "Engineering", 3);
    Education ed2("Ph.D", "English", 1);
    Education ed3("MS", "Physical Education", 0);

    emp[n++] = new Faculty("Johnson", "Anne", "243", Faculty::FU, ed1);
    emp[n++] = new Faculty("Bouris", "William", "791", Faculty::AO, ed2);
    emp[n++] = new Faculty("Andrade", "Christopher", "623", Faculty::AS, ed3);

    emp[n++] = new Partime("Guzman", "Augusto", "455", 35.00, 30);
    emp[n++] = new Partime("Depirro", "Martin", "678", 30.00, 15);
    emp[n++] = new Partime("Aldaco", "Marque", "945", 20, 35.00);

    double staffSalTotal = 0;
    double facSalTotal = 0;
    double ptSalTotal = 0;


    for (int i = 0; i < n; i++) {
        emp[i]->putData(); 

        if (typeid(*emp[i]) == typeid(Staff)) {
            staffSalTotal += emp[i]->monthlyEarning();
        } else if (typeid(*emp[i]) == typeid(Faculty)) {
            facSalTotal += emp[i]->monthlyEarning();
        } else if (typeid(*emp[i]) == typeid(Partime)) {
            ptSalTotal += emp[i]->monthlyEarning();
        }

        cout << endl;
    }

    double totalEmpSal = staffSalTotal + facSalTotal + ptSalTotal;


    cout << "Total monthly salary for all the part-time staff: $" << ptSalTotal << endl;
    cout << "Total monthly salary for faculty: $" << facSalTotal << endl;
    cout << "Total monthly salary for all staff: $" << staffSalTotal << endl;
    cout << "Total monthly salary for all employees: $" << totalEmpSal << endl;

    return 0;
}

