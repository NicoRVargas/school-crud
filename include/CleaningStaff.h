#ifndef CLEANNING_STAFF_H
#define CLEANNING_STAFF_H

#include <iostream>
#include <string>

#include "Employee.h"

class CleaningStaff : public Employee
{
private:
    std::string role;

public:
    CleaningStaff(
        std::string name,
        std::string surname,
        std::string cpf,
        std::string phoneNumber,
        std::string email,
        std::string password,
        std::string occupation,
        std::string gender,
        std::string birthday,
        std::string role,
        int type)
        : Employee(name, surname, cpf, phoneNumber, email, password, occupation, gender, birthday, type)
    {
        this->role = role;
    }

    ~CleaningStaff();

    std::string getRole();
};

#endif