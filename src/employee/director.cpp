#include "../../include/employee/director.h"
void Director::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: Director";

}
