#include "../../include/employee/assistant.h"
void Assistant::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: " << "assistant" << endl;
}
