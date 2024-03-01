#include "../../include/vehicle/standard.h"

float Standard::computeInsurance(bool DISCOUNT) const
{
    int kmCost = kmCount > 200000 ? 500 : 0;
    int yearCost = (getCurrentYear() - manufacturingDate.year) * 100;
    int dieselCost = isDiesel * 500;
    float finalPercentage = (1.0 - 0.05*DISCOUNT);

    return (kmCost + yearCost + dieselCost) * finalPercentage;
}
