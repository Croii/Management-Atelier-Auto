#include "../../include/employee/director.h"
void Director::printEmployee() const
{
    Employee::printEmployee();
    cout << "Role: Director" << endl;

}
const double Director::SALARY_COEFFICIENT = 2;
istream &operator>>(istream &in, Director &director)
{
    cout << "Enter director's first name: ";
    in >> director.firstName;
    cout << "Enter director's second name: ";
    in >> director.secondName;
    cout << "Enter director's birth date: ";
    in >> director.birthDate.day >> director.birthDate.month >> director.birthDate.year;
    cout << "Enter director's employement date: ";
    in >> director.employementDate.day >> director.employementDate.month >> director.employementDate.year;
    return in;
}