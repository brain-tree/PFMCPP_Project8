#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void getUpToSpeed()
{
    std::cout << "Entering on-ramp and matching highway speed" << std::endl;
}

void pullOver()
{
    std::cout << "Johnny Law's barking on your heels" << std::endl;
}
