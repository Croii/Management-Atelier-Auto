#include "../../include/employee/director.h"
void Director::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: Director" << endl;

}
const double Director::SALARY_COEFFICIENT =2;