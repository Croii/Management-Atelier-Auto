#include "../../include/vehicle/truck.h"

float Truck::computeInsurance(bool DISCOUNT) const
{
    int kmCost = kmCount > 800000 ? 700 : 0;
    int yearCost = (getCurrentYear() - manufacturingDate.year) * 300;
    float finalPercentage = (1.0 - 0.15 * DISCOUNT);

    return (kmCost + yearCost) * finalPercentage;
}
std::ostream &operator<<(std::ostream &os, const Truck &truck)
{
    os << "Truck: " << std::endl;
    os << "Km count: " << truck.kmCount << std::endl;
    os << "Manufacturing date: " << truck.manufacturingDate.year << "/" << truck.manufacturingDate.month
         << "/" << truck.manufacturingDate.day << std::endl;
    os << "Is diesel: " << truck.isDiesel << std::endl;
    os << "Tonnage: " << truck.tonnage << std::endl;

    return os;

}

std::istream &operator>>(std::istream &is, Truck &truck)
{
    std::cout << "Enter km count: ";
    is >> truck.kmCount;
    std::cout << "Enter manufacturing date: ";
    is >> truck.manufacturingDate.year >> truck.manufacturingDate.month >> truck.manufacturingDate.day;
    std::cout << "Is diesel: ";
    is >> truck.isDiesel;
    std::cout << "Enter tonnage: ";
    is >> truck.tonnage;

    return is;
}
