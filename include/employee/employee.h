#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

#include "../date/date.h"

using namespace std;

class Employee
{
protected:
    static int ID;

    int id;
    string firstName;
    string secondName;
    date birthDate;
    date employementDate;
    double salaryCoefficient;

public:
    Employee(string firstName = "", string secondName = "", date birthDate = {0, 0, 0}, date employementDate = {0, 0, 0}, double salaryCoefficient = 0) : firstName(firstName), secondName(secondName), birthDate(birthDate), employementDate(employementDate), salaryCoefficient(salaryCoefficient)
    {
        id = ++ID;
    };
    virtual void printEmployee() const;
    double computeSalary() const;
    virtual ~Employee(){};
    void printName() const;
};

#endif // EMPLOYEE_H F