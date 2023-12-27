#ifndef ASSISTANT_H
#define ASSISTANT_H

#include "employee.h"

class Assistant : public Employee
{
private:
    const double SALARY_COEFFICIENT = 1;

public:
    Assistant() = default;
    Assistant(int id, string firstName, string secondName, date birthDate, date employementDate) : Employee(id, firstName, secondName, birthDate, employementDate, SALARY_COEFFICIENT){};
    void printEmployee() const;
    double computeSalary() const;
};
#endif // ASSISTANT_H