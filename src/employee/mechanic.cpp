#include "../../include/employee/mechanic.h"

const double Mechanic::SALARY_COEFFICIENT = 1.5;


void Mechanic::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: Mechanic" << endl;
}

istream &operator>>(istream &in, Mechanic &mechanic)
{
    cout << "Enter mechanic's first name: ";
    in >> mechanic.firstName;
    cout << "Enter mechanic's second name: ";
    in >> mechanic.secondName;
    cout << "Enter mechanic's birth date: ";
    in >> mechanic.birthDate.day >> mechanic.birthDate.month >> mechanic.birthDate.year;
    cout << "Enter mechanic's employement date: ";
    in >> mechanic.employementDate.day >> mechanic.employementDate.month >> mechanic.employementDate.year;
    



    return in;
}
