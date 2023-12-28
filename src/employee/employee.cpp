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
    // get the current system time
    time_t systemTime = time(0);

    tm *ltm = localtime(&systemTime);
    // ltm->tm_year contains the years elapsed since 1900
    int currentYear = 1900 + ltm->tm_year;
    
    return (currentYear - employementDate.year) * salaryCoefficient * 1000;
}