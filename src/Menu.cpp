#include <iostream>
#include <string>
#include "Menu.h"
#include <unistd.h>
#include "AccountValidator.h"

Menu::Menu(){
    AccountValidator* accountValidator = new AccountValidator;

    std::string email;
    std::string password;

    std::cout << "Welcome to Hogwarts System\n\n";
    sleep(2);
    std::cout << "User: ";
    std::cin >> email;
    std::cout << "\nPassword: ";
    std::cin >> password;
    if(accountValidator->validation(email,password)){
        std::cout << "\nLogging...";
    }

    else{
        std::cout << "\nWrong user or password, try again.";
    }


}

Menu::~Menu(){}