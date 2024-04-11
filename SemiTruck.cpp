#include <iostream>
#include "SemiTruck.h"
#include "Vehicle.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;

void getUpToSpeed()
{
    std::cout << "Entering on-ramp and matching highway speed" << std::endl;
}

void pullOver()
{
    std::cout << "Johnny Law's barking on your heels" << std::endl;
}
