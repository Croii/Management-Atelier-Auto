#include "../../include/employee/mechanic.h"

void Mechanic::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: Mechanic" << endl;
}
const double Mechanic::SALARY_COEFFICIENT = 1.5;