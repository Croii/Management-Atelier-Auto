#include "../../include/vehicle/bus.h"

float Bus::computeInsurance(bool DISCOUNT) const
{
    int kmCost = kmCount > 200000 ? 1000 : (kmCount > 100000 ? 500 : 0);
    int yearCost = (getCurrentYear() - manufacturingDate.year) * 200;
    int dieselCost = isDiesel * 1000;
    float finalPercentage = (1.0 - 0.1 * DISCOUNT);

    return (kmCost + yearCost + dieselCost) * finalPercentage;
}