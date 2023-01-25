#include <iostream>
#include <string>

#include "../include/CleaningStaff.h"

CleaningStaff::~CleaningStaff() {}

std::string CleaningStaff::getRole()
{
    return this->role;
}