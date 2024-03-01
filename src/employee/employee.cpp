#include "../../include/employee/employee.h"

int Employee::ID = 0;

void Employee::printEmployee() const
{
    cout << "ID:" << id << endl;
    cout << "Name: " << firstName << " " << secondName << endl;
    cout << "Birth date: " << birthDate.day << '.' << birthDate.month << '.' << birthDate.year << endl;
    cout << "Empoyement date: " << employementDate.day << '.' << employementDate.month << '.' << employementDate.year << endl;
}

double Employee::computeSalary() const
{
    return (getCurrentYear() - employementDate.year) * salaryCoefficient * 1000;
}
void Employee::printName() const
{
    cout << firstName << " " << secondName;
}