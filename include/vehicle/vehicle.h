#ifndef VEHICLE_H
#define VEHICLE_H

#include "../date/date.h"

class Vehicle
{

protected:
    // id count for class
    static int ID;
    // object id
    int id;
    int kmCount;
    date manufacturingDate;
    bool isDiesel;

public:
    Vehicle() : kmCount(0), manufacturingDate(date()), isDiesel(false)
    {
        id = ++ID;
    };
    Vehicle(int kmCount, date manufacturingDate, bool isDiesel) : kmCount(kmCount), manufacturingDate(manufacturingDate), isDiesel(isDiesel)
    {
        id = ++ID;
    };

    virtual float computeInsurance(bool DISCOUNT) const = 0;
    
    virtual ~Vehicle(){};
};

#endif // VEHICLE_H