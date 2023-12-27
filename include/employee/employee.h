#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
protected:
    struct date
    {
        int day;
        int month;
        int year;
    };

    int id;
    string firstName;
    string secondName;
    date birthDate;
    date employementDate;
    double salaryCoefficient;

public:
    Employee(int id, string firstName, string secondName, date birthDate, date employementDate, double salaryCoefficient);
    virtual void printEmployee() const = 0;
    virtual double computeSalary() const = 0;
    virtual ~Employee(){};
};

#endif // EMPLOYEE_H F