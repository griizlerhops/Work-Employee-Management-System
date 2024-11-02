
An employee management project in OOP C++ that defines a simple employee management system in C++ using classes and inheritance. It models different types of employees—Staff, Faculty, and Partime (part-time)—each with unique attributes and salary calculations. The Employee base class provides common properties (e.g., firstName, lastName, and ID), while derived classes add specific details:

Staff includes an hourly rate and assumes 160 working hours per month for full-time employees.
Faculty distinguishes levels (Assistant, Associate, Full) with different monthly salaries based on rank and includes an Education attribute (degree, major, research years).
Partime holds the weekly hours worked and calculates salary based on a 4-week month.
The main program creates instances of each employee type, stores them in an array of Employee pointers, and dynamically calculates and outputs monthly earnings by category (Staff, Faculty, Partime) as well as a total monthly salary for all employees.
