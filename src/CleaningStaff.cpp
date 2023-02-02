#include <iostream>
#include <string>

#include "../include/CleaningStaff.h"

CleaningStaff::~CleaningStaff() {}

std::string CleaningStaff::getRole()
{
    return this->role;
}

void CleaningStaff::showCleaningStaffAccountInformation(Account *user)
{
    std::cout << "Name: " << user->getName() << " " << user->getSurname();
    std::cout << "\nRole: " << ((CleaningStaff*)user)->getRole();
    std::cout << "\nEmail: " << user->getEmail();
    std::cout << "\nPassword: " << user->getPassword();
    std::cout << "\nCPF: " << user->getCpf();
    std::cout << "\nPhone Number: " << user->getPhoneNumber();
    std::cout << "\nGender: " << user->getGender();
    std::cout << "\nBirthday: " << user->getBirthday();
    std::cout << std::endl;
}