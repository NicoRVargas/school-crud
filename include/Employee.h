#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

#include "Account.h"

class Employee : public Account
{
private:
    double salary = 13513;
    std::string shift;

public:
    Employee(
        std::string name,
        std::string surname,
        std::string cpf,
        std::string phoneNumber,
        std::string email,
        std::string password,
        std::string occupation,
        std::string gender,
        std::string birthday,
        int type)
        : Account(name, surname, cpf, phoneNumber, email, password, occupation, gender, birthday, type) {}

    ~Employee();

    double getSalary();

    std::string getShift();

    void setSalary(double salary);

    void setShift(std::string shift);

    double annualSalary();
};

#endif