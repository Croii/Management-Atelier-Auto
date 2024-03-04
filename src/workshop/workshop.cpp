#include "../../include/workshop/workshop.h"

bool Workshop::isEmpty() const
{
    return employeesCount;
}

void Workshop::assignTask(Vehicle *vehicle, Employee *employee)
{
    if (checkAvailability(employees.find(employee)->first))
    {
        employees[employee].push_back(vehicle);
    }
}
void Workshop::addEmployee()
{
    cout << "Which employee do you want to add?" << endl;
    cout << "1.Mechanic" << endl;
    cout << "2.Assistant" << endl;
    cout << "3.Director" << endl;

    int input = Menu::getUserInput(3);

    Employee *employee;
    Mechanic *mechanic;
    Assistant *assistant;
    Director *director;

    switch (input)
    {
    case 1:

        mechanic = new Mechanic();
        cin >> *mechanic;
        employee = mechanic;
        break;
    case 2:
        assistant = new Assistant();
        cin >> *assistant;
        employee = assistant;
        break;
    case 3:
        director = new Director();
        cin >> *director;
        employee = director;
        break;
    }

    employees[employee] = std::vector<Vehicle *>();
    employeesCount++;
}

void Workshop::deleteEmployee()
{
    if (employeesCount == 0)
    {
        cout << "No employees to remove" << endl;
        return;
    }

    cout << "Select employee for removal" << endl;
    printEmployees();
    int input = Menu::getUserInput(employeesCount);
    auto it = employees.begin();
    advance(it, input - 1);
    employees.erase(it);
    employeesCount--;
}

void Workshop::assignCar()
{
    if (employeesCount == 0)
    {
        cout << "No employees to assign a car to" << endl;
        return;
    }

    cout << "Select employee to assign a car to" << endl;
    printEmployees();
    int input = Menu::getUserInput(employeesCount);
    auto it = employees.begin();
    advance(it, input - 1);
    Employee *employee = it->first;

    if (checkAvailability(employee))
    {
        cout << "Select vehicle to assign" << endl;
        cout << "1.Standard" << endl;
        cout << "2.Truck" << endl;
        cout << "3.Bus" << endl;
        int vehicleInput = Menu::getUserInput(3);
        Vehicle *vehicle;
        switch (vehicleInput)
        {
        case 1:
            vehicle = new Standard();
            cin >> dynamic_cast<Standard &>(*vehicle);
            break;
        case 2:
            vehicle = new Truck();
            cin >> dynamic_cast<Truck &>(*vehicle);
            break;
        case 3:
            vehicle = new Bus();
            cin >> dynamic_cast<Bus &>(*vehicle);
            break;
        }

        employees[employee].push_back(vehicle);
    }
    else
    {
        cout << "Employee is not available" << endl;
    }
}

void Workshop::finishCar()
{
    if (employeesCount == 0)
    {
        cout << "No employees to finish a car" << endl;
        return;
    }

    cout << "Select employee to finish a car" << endl;
    printEmployees();
    int input = Menu::getUserInput(employeesCount);
    auto it = employees.begin();
    advance(it, input - 1);
    Employee *employee = it->first;

    if (employees[employee].size() == 0)
    {
        cout << "No cars to finish" << endl;
        return;
    }

    cout << "Select car to finish" << endl;
    for (int i = 0; i < employees[employee].size(); i++)
    {
        cout << i + 1 << ". " << typeid(*employees[employee][i]).name() << endl;
    }
    int vehicleInput = Menu::getUserInput(employees[employee].size());
    employees[employee].erase(employees[employee].begin() + vehicleInput - 1);

}

bool Workshop::checkAvailability(Employee *employee)
{
    int truckCount = 0;
    int standardCount = 0;
    int busCount = 0;

    auto employeeVehicles = employees[employee];

    for (auto vehicle : employeeVehicles)
    {
        if (typeid(*vehicle).name() == typeid(Truck).name())
            truckCount++;
        else if (typeid(*vehicle).name() == typeid(Standard).name())
            standardCount++;
        else if (typeid(*vehicle).name() == typeid(Standard).name())
            busCount++;
    }
    return standardCount <= 3 && busCount <= 1 && truckCount <= 1;
}
void Workshop::printEmployees() const
{
    for (auto employee : employees)
    {
        employee.first->printName();
        cout << endl;
    }
}

