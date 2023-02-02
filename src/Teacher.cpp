#include <iostream>
#include <string>

#include "../include/Teacher.h"

Teacher::~Teacher() {}

void Teacher::setSubject(std::string subject)
{
    this->subject = subject;
}
void Teacher::setClasses(std::vector<std::string> &classes)
{
    this->classes = classes;
}
std::string Teacher::getSubject()
{
    return this->subject;
}
std::vector<std::string> Teacher::getClasses()
{
    return this->classes;
}

double Teacher::submitGrade()
{
    return 10;
}

void Teacher::showTeacherAccountInformation(Account *user)
{
    std::cout << "Name: " << user->getName() << " " << user->getSurname();
    std::cout << "\nSubject: " << ((Teacher *)user)->getSubject() << " teacher";
    std::cout << "\nEmail: " << user->getEmail();
    std::cout << "\nPassword: " << user->getPassword();
    std::cout << "\nCPF: " << user->getCpf();
    std::cout << "\nPhone Number: " << user->getPhoneNumber();
    std::cout << "\nGender: " << user->getGender();
    std::cout << "\nBirthday: " << user->getBirthday();
    std::cout << std::endl;
}