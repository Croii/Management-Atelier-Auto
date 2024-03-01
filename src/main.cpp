#include <iostream>

#include "../include/employee/assistant.h"
#include "../include/employee/director.h"
#include "../include/employee/mechanic.h"

#include "../include/vehicle/bus.h"
#include "../include/vehicle/standard.h"
#include "../include/vehicle/truck.h"

#include "../include/menu/menu.h"
#include "../include/workshop/workshop.h"

#include <vector>

using namespace std;

int main()
{

    system("clear"); // clearing console
    Workshop workshop(map<Employee *, vector<Vehicle *>>(), 0);
    while(1)
    Menu::printMenu(workshop);

    return 0;
}