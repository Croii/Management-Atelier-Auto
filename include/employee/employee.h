#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
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
    Employee(int id = 0, string firstName = "", string secondName = "", date birthDate = {0, 0, 0}, date employementDate = {0, 0, 0}, double salaryCoefficient = 0){};
    virtual void printEmployee() const;
    double computeSalary() const;
    virtual ~Employee(){};
};

#endif // EMPLOYEE_H F