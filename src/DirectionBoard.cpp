#include <iostream>
#include <string>

#include "../include/DirectionBoard.h"

DirectionBoard::~DirectionBoard() {}

std::string DirectionBoard::getRole()
{
    return this->role;
}