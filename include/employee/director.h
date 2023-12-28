#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "employee.h"

class Director : public Employee
{
private:
    const double SALARY_COEFFICIENT = 2;

public:
    Director() = default;
    Director(int id, string firstName, string secondName, date birthDate, date employementDate) : Employee(id, firstName, secondName, birthDate, employementDate, SALARY_COEFFICIENT){};
    void printEmployee() const;
};

#endif // DIRECTOR_H