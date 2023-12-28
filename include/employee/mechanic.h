#ifndef MECHANIC_H
#define MECHANIC_H

#include "employee.h"

class Mechanic: public Employee
{
private:
    const double SALARY_COEFFICIENT = 1.5;

public:
    Mechanic() = default;
    Mechanic(int id, string firstName, string secondName, date birthDate, date employementDate) : Employee(id, firstName, secondName, birthDate, employementDate, SALARY_COEFFICIENT){};
    void printEmployee() const;

};

#endif // MECHANIC_H