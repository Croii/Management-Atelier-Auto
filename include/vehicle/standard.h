#ifndef STANDARD_H
#define STANDARD_H

#include "vehicle.h"

class Standard : public Vehicle
{
private:
    char transmission;

public:
    Standard(int kmCount, date manufacturingDate, bool isDiesel, char transmission) : Vehicle(kmCount, manufacturingDate, isDiesel), transmission(transmission){};
    float computeInsurance(bool DISCOUNT) const;
};

#endif // STANDARD_H