#ifndef BUS_H
#define BUS_H

#include "vehicle.h"
#include <iostream>

class Bus : public Vehicle
{
private:
    int seatsCount;

public:
    Bus(int kmCount, date manufacturingDate, bool isDiesel, int seatsCount) : Vehicle(kmCount, manufacturingDate, isDiesel), seatsCount(seatsCount){};
    Bus() : Vehicle(), seatsCount(0){};
    float computeInsurance(bool DISCOUNT) const;
    friend std::ostream &operator<<(std::ostream &os, const Bus &bus);
    friend std::istream &operator>>(std::istream &is, Bus &bus);

};

#endif // BUS_H