#include "../../include/vehicle/standard.h"

float Standard::computeInsurance(bool DISCOUNT) const
{
    int kmCost = kmCount > 200000 ? 500 : 0;
    int yearCost = (getCurrentYear() - manufacturingDate.year) * 100;
    int dieselCost = isDiesel * 500;
    float finalPercentage = (1.0 - 0.05 * DISCOUNT);

    return (kmCost + yearCost + dieselCost) * finalPercentage;
}

std::ostream &operator<<(std::ostream &os, const Standard &standard)
{
    os << "Standard car with " << standard.kmCount;
    os << " km, manufactured in " << standard.manufacturingDate.year;
    os << ", diesel: " << standard.isDiesel;
    os << ", transmission: " << standard.transmission;
    
    return os;
}

std::istream &operator>>(std::istream &is, Standard &standard)
{
    std::cout << "Enter km count: ";
    is >> standard.kmCount;
    std::cout << "Enter manufacturing date: ";
    is >> standard.manufacturingDate.year >> standard.manufacturingDate.month >> standard.manufacturingDate.day;
    std::cout << "Is diesel? (1/0): ";
    is >> standard.isDiesel;
    std::cout << "Enter transmission type(m/a): ";
    is >> standard.transmission;
    return is;
}
