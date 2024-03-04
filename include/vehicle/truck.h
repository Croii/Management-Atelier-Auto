#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"
#include <iostream>

class Truck : public Vehicle
{
private:
    int tonnage;

public:
    Truck(int kmCount, date manufacturingDate, bool isDiesel, int tonnage) : Vehicle(kmCount, manufacturingDate, isDiesel), tonnage(tonnage){};
    Truck() : Vehicle(), tonnage(0){};
    float computeInsurance(bool DISCOUNT) const;
    friend std::ostream &operator<<(std::ostream &os, const Truck &truck);
    friend std::istream &operator>>(std::istream &is, Truck &truck);
};

#endif // TRUCK_H