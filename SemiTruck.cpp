#include "SemiTruck.h"
#include "Vehicle.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;

void SemiTruck::getUpToSpeed()
{
    setSpeed(50);
    std::cout << "Entering on-ramp and matching highway speed" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << "Johnny Law's barking on your heels" << std::endl;
}
