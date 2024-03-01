#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "employee.h"

class Director : public Employee
{
    static const double SALARY_COEFFICIENT;

public:
    Director() = default;
    Director(string firstName, string secondName, date birthDate, date employementDate) : Employee(firstName, secondName, birthDate, employementDate, SALARY_COEFFICIENT){};
    void printEmployee() const;
    friend istream &operator>>(istream &in, Director &director);
};

#endif // DIRECTOR_H