#include "../../include/employee/assistant.h"
void Assistant::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: "
         << "assistant" << endl;
}

const double Assistant::SALARY_COEFFICIENT = 1;
istream &operator>>(istream &in, Assistant &assistant)
{
    cout << "Enter assistant's first name: ";
    in >> assistant.firstName;
    cout << "Enter assistant's second name: ";
    in >> assistant.secondName;
    cout << "Enter assistant's birth date: ";
    in >> assistant.birthDate.day >> assistant.birthDate.month >> assistant.birthDate.year;
    cout << "Enter assistant's employement date: ";
    in >> assistant.employementDate.day >> assistant.employementDate.month >> assistant.employementDate.year;
    return in;
}