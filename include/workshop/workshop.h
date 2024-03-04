#ifndef WORKSHOP_H
#define WORKSHOP_H

#include "../employee/assistant.h"
#include "../employee/director.h"
#include "../employee/employee.h"
#include "../employee/mechanic.h"

#include "../vehicle/bus.h"
#include "../vehicle/standard.h"
#include "../vehicle/truck.h"
#include "../vehicle/vehicle.h"

#include "../menu/menu.h"

#include <map>
#include <utility>
#include <vector>

class Workshop
{
    friend class Menu;

private:
    // vector<Employee *> employees;
    map<Employee *, vector<Vehicle *>> employees;
    int employeesCount;

public:
    Workshop(map<Employee *, vector<Vehicle *>> employees, int employeesCount = 0) : employees(employees), employeesCount(employeesCount){};
    bool isEmpty() const;
    void assignTask(Vehicle *vehicle, Employee *employee = nullptr);
    void addEmployee();
    void deleteEmployee();
    void assignCar();
    void finishCar();
    void printVehicles() const;

    bool checkAvailability(Employee *employee);
    void printEmployees() const;
};
#endif // WORKSHOP_H;
