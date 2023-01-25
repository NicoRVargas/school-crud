#include <iostream>
#include <string>

#include "../include/Account.h"

Account::Account(
    std::string name,
    std::string surname,
    std::string cpf,
    std::string phoneNumber,
    std::string email,
    std::string password,
    std::string occupation,
    std::string gender,
    std::string birthday)
{

    this->name = name;
    this->surname = surname;
    this->cpf = cpf;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->password = password;
    this->occupation = occupation;
    this->gender = gender;
    this->birthday = birthday;
}

Account::~Account() {}

std::string Account::getName()
{
    return this->name;
}
std::string Account::getSurname()
{
    return this->surname;
}
std::string Account::getCpf()
{
    return this->cpf;
}
std::string Account::getPhoneNumber()
{
    return this->phoneNumber;
}
std::string Account::getEmail()
{
    return this->email;
}
std::string Account::getPassword()
{
    return this->password;
}
std::string Account::getOccupation()
{
    return this->occupation;
}
std::string Account::getGender()
{
    return this->gender;
}
std::string Account::getBirthday()
{
    return this->birthday;
}

void Account::setEmail(std::string email)
{
    this->email = email;
}

void Account::setPassword(std::string password)
{
    this->password = password;
}