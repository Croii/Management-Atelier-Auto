#include "../../include/menu/menu.h"

void Menu::printMenu(Workshop &workshop)
{
    cout << "1.Employee menu" << endl;
    cout << "2.Fix a car" << endl;
    cout << "3.Exit()" << endl;

    int input = Menu::getUserInput(3);
    switch (input)
    {
    case 1:
        system("clear"); // clearing console
        Menu::printEmployeeMenu(workshop);
        break;
    case 2:
        system("clear"); // clearing console
        // workshop.fixCar();
        break;

    case 3:
        system("clear"); // clearing console
        exit(0);
        break;

    default:
        break;
    }
}

int Menu::getUserInput(int range)
{
    int userInput;
    while (true)
    {
        cout << "Select an option:";
        cin >> userInput;

        if (cin.fail())
        {
            // Clear the error flag
            cin.clear();
            // Discard any remaining characters in the input buffer
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // cerr << "Invalid input. Please enter a number." << std::endl;
        }
        else if (userInput < 1 || userInput > range)
        {
            // cerr << "Invalid input:" << std::endl;
        }
        else
        {
            // Valid input, break out of the loop
            break;
        }
    }

    return userInput;
}

void Menu::printEmployeeMenu(Workshop &workshop)
{
    cout << "1.Add an employee" << endl;
    cout << "2.Delete an employee" << endl;
    cout << "3.Print employees" << endl;
    cout << "4.Assign a car to an employee" << endl; // "4.Assign a car to an employee\n5.Finish a car\n
    cout << "5.Finish a car" << endl;

    int input = Menu::getUserInput(5);
    switch (input)
    {
    case 1:
        system("clear"); // clearing console
        workshop.addEmployee();
        system("clear"); // clearing console
        break;

    case 2:
        system("clear"); // clearing console
        workshop.deleteEmployee();
        break;

    case 3:
        system("clear"); // clearing console
        workshop.printEmployees();
        cout << "Press enter to continue...";
        getchar();
        getchar();
        system("clear");
        break;

    case 4:
        system("clear"); // clearing console
        workshop.assignCar();
        break;

    case 5:
        system("clear"); // clearing console
        workshop.finishCar();
        break;
    }
    // Menu::printMenu(workshop);
}