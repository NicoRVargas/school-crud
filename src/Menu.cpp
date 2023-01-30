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
    homeScreen(user->getType(), user);
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

void Menu::homeScreen(int homeScreenType, Account* user)
{
    switch(homeScreenType)
    {
    int screenOperation;

        case 1:
        std::cout << "caso 1";
        break;

        case 2:
        std::cout << "caso 2";
        break;

        case 3: 
        std::cout << "caso 3";
        break;

        case 4:
        std::cout << "Inform the operation you want to realize. \n"
                    "[1] - See grades. \n"
                    "[2] - Account information. \n"
                    "[3] - Attendance data. \n"
                    "[4] - Logout. \n";
        std::cin >> screenOperation;
            if(screenOperation == 1){
                int teste = user->getType();
                int teste2 = user->getStudentClass();
                std::cout << teste << " " << teste2;
            }
        break;   
    }

}