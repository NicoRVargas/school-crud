#include <iostream>
#include <string>
#include <unistd.h>

#include "../include/Account.h"
#include "../include/DirectionBoard.h"
#include "../include/Menu.h"
#include "../include/AccountValidator.h"

Menu::Menu()
{
    AccountValidator *accountValidator = new AccountValidator;

    std::string email;
    std::string password;

    Account* Nicolas = new DirectionBoard("Nicolas", "Vargas", "129381", "519381239", "nico@gmail.com", "123", "DirectionBoard", "Masculino", "11/02/2004", "Director", 1);

    std::cout << "Welcome to Hogwarts System\n\n";
    sleep(1);
    
    std::cout << "User: ";
    std::cin >> email;
    sleep(0.5);

    std::cout << "\nPassword: ";
    std::cin >> password;
    
    if (accountValidator->validation(email, password))
    {
        std::cout << "\nLogging...";
    }

    else
    {
        std::cout << "\nWrong user or password, try again.";
    }
}

Menu::~Menu() {}