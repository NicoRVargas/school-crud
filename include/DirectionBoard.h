#ifndef DIRECTION_BOARD_H
#define DIRECTION_BOARD_H

#include <iostream>
#include <string>

#include "Employee.h"

class DirectionBoard : public Employee{
    private:
    std::string role;

    public:
    DirectionBoard(
        std::string name,
        std::string surname, 
        std::string cpf,
        std::string phoneNumber, 
        std::string email,
        std::string password, 
        std::string occupation,
        std::string gender, 
        std::string birthday,
        std::string role
    )
    : Employee(name, surname, cpf, phoneNumber, email, password, occupation, gender, birthday){
        this->role = role;
    }
    ~DirectionBoard();
};

#endif