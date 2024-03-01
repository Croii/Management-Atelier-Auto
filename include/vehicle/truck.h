#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"

class Truck : public Vehicle
{
private:
    int tonnage;

public:
    Truck(int kmCount, date manufacturingDate, bool isDiesel, int tonnage) : Vehicle(kmCount, manufacturingDate, isDiesel), tonnage(tonnage){};
    float computeInsurance(bool DISCOUNT) const;
};

#endif // TRUCK_H