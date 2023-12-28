#include "../../include/employee/employee.h" #include "employee.h"

void Employee::printEmployee() const
{
    cout << "ID:" << id << endl;
    cout << "Name: " << firstName << " " << secondName << endl;
    cout << "Birth date: " << birthDate.day << '.' << birthDate.month << '.' << birthDate.year << endl;
    cout << "Empoyement date: " << employementDate.day << '.' << employementDate.month << '.' << employementDate.year << endl;
}
