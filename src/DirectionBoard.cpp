#include <iostream>
#include <string>

#include "../include/DirectionBoard.h"

DirectionBoard::~DirectionBoard() {}

std::string DirectionBoard::getRole()
{
    return this->role;
}

void DirectionBoard::showDirectionBoardAccountInformation(Account *user)
{
    std::cout << "Name: " << user->getName() << " " << user->getSurname();
    std::cout << "\nRole: " << ((DirectionBoard *)user)->getRole();
    std::cout << "\nEmail: " << user->getEmail();
    std::cout << "\nPassword: " << user->getPassword();
    std::cout << "\nCPF: " << user->getCpf();
    std::cout << "\nPhone Number: " << user->getPhoneNumber();
    std::cout << "\nGender: " << user->getGender();
    std::cout << "\nBirthday: " << user->getBirthday();
    std::cout << std::endl;
}