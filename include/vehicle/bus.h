#ifndef BUS_H
#define BUS_H

#include "vehicle.h"

class Bus : public Vehicle
{
private:
    int seatsCount;

public:
    Bus(int kmCount, date manufacturingDate, bool isDiesel, int seatsCount) : Vehicle(kmCount, manufacturingDate, isDiesel), seatsCount(seatsCount){};
    float computeInsurance(bool DISCOUNT) const;

};

#endif // BUS_H