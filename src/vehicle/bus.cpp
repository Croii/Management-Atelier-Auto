#include "../../include/vehicle/bus.h"

float Bus::computeInsurance(bool DISCOUNT) const
{
    int kmCost = kmCount > 200000 ? 1000 : (kmCount > 100000 ? 500 : 0);
    int yearCost = (getCurrentYear() - manufacturingDate.year) * 200;
    int dieselCost = isDiesel * 1000;
    float finalPercentage = (1.0 - 0.1 * DISCOUNT);

    return (kmCost + yearCost + dieselCost) * finalPercentage;
}
std::ostream &operator<<(std::ostream &os, const Bus &bus)
{
    os << "Bus: " << std::endl;
    os << "Km count: " << bus.kmCount << std::endl;
    os << "Manufacturing date: " << bus.manufacturingDate.year << "/" << bus.manufacturingDate.month
       << "/" << bus.manufacturingDate.day << std::endl;
    os << "Is diesel: " << bus.isDiesel << std::endl;
    os << "Seats count: " << bus.seatsCount << std::endl;

    return os;
}

std::istream &operator>>(std::istream &is, Bus &bus)
{
    std::cout << "Enter km count: ";
    is >> bus.kmCount;
    std::cout << "Enter manufacturing date: ";
    is >> bus.manufacturingDate.year >> bus.manufacturingDate.month >> bus.manufacturingDate.day;
    std::cout << "Is diesel: ";
    is >> bus.isDiesel;
    std::cout << "Enter seats count: ";
    is >> bus.seatsCount;
    return is;
}