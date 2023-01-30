#include <iostream>
#include <string>
#include <optional>
#include <unistd.h>

#include "../include/Account.h"
#include "../include/DirectionBoard.h"
#include "../include/Menu.h"
#include "../include/AccountValidator.h"

Menu::Menu() {}

Menu::~Menu() {}

void Menu::run()
{
    std::cout << "Welcome to Hogwarts System\n\n";
    sleep(0.5);

    Account* user = loginScreen();
}

Account* Menu::loginScreen()
{
    AccountValidator *accountValidator = new AccountValidator;

    std::string email;
    std::string password;

    std::optional<Account *> optional;

    do
    {
        std::cout << "\nUser: ";
        std::cin >> email;
        sleep(0.5);

        std::cout << "\nPassword: ";
        std::cin >> password;

        optional = accountValidator->validation(email, password);

        if (!optional)
        {
            std::cout << "\nWrong user or password, try again.";
        }

    } while (!optional);

    return optional.value();
}

void Menu::homeScreen(int homeScreenType)
{
    switch(homeScreenType)
    {
        case 1:
        
    }

}