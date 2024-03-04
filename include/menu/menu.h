#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <limits>    // For numeric_limits
#include <stdexcept> // For out_of_range
#include "../workshop/workshop.h"

class Workshop;

using namespace std;

class Menu
{
    friend class Workshop;

private:
public:
    static void printMenu(Workshop &workshop);
    static void printEmployeeMenu(Workshop &workshop);
    static void printVehicleMenu(Workshop &workshop);
    static int getUserInput(int range);
};

#endif // MENU_H