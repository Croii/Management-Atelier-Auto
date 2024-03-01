#ifndef MECHANIC_H
#define MECHANIC_H

#include "employee.h"

class Mechanic : public Employee
{
    static const double SALARY_COEFFICIENT;

public:
    Mechanic() = default;
    Mechanic(string firstName, string secondName, date birthDate, date employementDate) : Employee(firstName, secondName, birthDate, employementDate, SALARY_COEFFICIENT){};
    void printEmployee() const;
    friend istream &operator>>(istream &in, Mechanic &mechanic);
};

#endif // MECHANIC_H