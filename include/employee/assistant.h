#ifndef ASSISTANT_H
#define ASSISTANT_H

#include "employee.h"

class Assistant : public Employee
{
public:
    static const double SALARY_COEFFICIENT;
    Assistant() = default;
    Assistant(string firstName, string secondName, date birthDate, date employementDate) : Employee(firstName, secondName, birthDate, employementDate, SALARY_COEFFICIENT) {};
    void printEmployee() const;
    friend istream &operator>>(istream &in, Assistant &assistant);
};
#endif // ASSISTANT_H