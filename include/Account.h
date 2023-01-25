#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

class Account{
private:
    std::string name;
    std::string surname;
    std::string cpf;
    std::string phoneNumber;
    std::string email;
    std::string password;
    std::string occupation;
    std::string gender;
    std::string birthday;

public:
    Account(
        std::string name,
        std::string surname, 
        std::string cpf,
        std::string phoneNumber, 
        std::string email,
        std::string password, 
        std::string occupation,
        std::string gender, 
        std::string birthday);
    ~Account();
    
    std::string getName(); 
    std::string getSurname(); 
    std::string getCpf(); 
    std::string getPhoneNumber(); 
    std::string getEmail();
    std::string getPassword(); 
    std::string getOccupation(); 
    std::string getGender(); 
    std::string getBirthday();

    void setEmail(std::string email);
    void setPassword(std::string password); 
};

#endif