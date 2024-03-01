#include "../../include/vehicle/truck.h"

float Truck::computeInsurance(bool DISCOUNT) const
{
    int kmCost = kmCount > 800000 ? 700 : 0;
    int yearCost = (getCurrentYear() - manufacturingDate.year) * 300;
    float finalPercentage = (1.0 - 0.15 * DISCOUNT);

    return (kmCost + yearCost) * finalPercentage;
}