#ifndef STANDARD_H
#define STANDARD_H

#include "vehicle.h"
#include <fstream>
#include <iostream>

class Standard : public Vehicle
{
private:
    char transmission;

public:

    Standard(int kmCount, date manufacturingDate, bool isDiesel, char transmission) : Vehicle(kmCount, manufacturingDate, isDiesel), transmission(transmission){};
    Standard() : Vehicle(0, date(), false), transmission('M'){};
    float computeInsurance(bool DISCOUNT) const;
    friend std::ostream &operator<<(std::ostream &os, const Standard &standard);
    friend std::istream &operator>>(std::istream &is, Standard &standard);
};

#endif // STANDARD_H