#include <iostream>
#include <string>
#include <optional>
#include <unistd.h>
#include <typeinfo>

#include "../include/Account.h"
#include "../include/DirectionBoard.h"
#include "../include/Menu.h"
#include "../include/AccountValidator.h"
#include "../include/Student.h"
#include "../include/Teacher.h"
#include "../include/DirectionBoard.h"
#include "../include/CleaningStaff.h"

Menu::Menu() {}

Menu::~Menu() {}

void Menu::run()
{
    bool running = true;
    int option;
    while (running)
    {
        std::cout << "Welcome to Hogwarts System\n";
        sleep(0.5);
        std::cout << "Do you wish to: \n"
                     "[1] - Login\n"
                     "[2] - Exit\n";
        std::cin >> option;
        switch (option)
        {
        case 1:
        {
            Account *user = loginScreen();
            homeScreen(user->getType(), user);
            break;
        }

        case 2:
        {
            running = false;
            break;
        }
        }
    }
}

Account *Menu::loginScreen()
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

void Menu::directionBoardMenu(Account *user)
{
}

void Menu::teacherMenu(Account *user)
{
}

void Menu::cleaningStaffMenu(Account *user)
{
}

void Menu::studentMenu(Account *user)
{
    int screenOperation;
    do
    {
        std::cout << "Inform the operation you want to realize. \n"
                     "[1] - Show my grades. \n"
                     "[2] - Account information. \n"
                     "[3] - Attendance data. \n"
                     "[4] - Logout. \n";
        std::cin >> screenOperation;
        switch (screenOperation)
        {
        case 1:
        {
            ((Student *)user)->showStudentGrades();
            break;
        }
        case 2:
        {
            ((Student *)user)->showStudentAccountInformation(user);
            break;
        }
        case 3:
        {
            std::cout << "Caso 3";
            break;
        }
        }
    } while (screenOperation != 4);
}
void Menu::homeScreen(int homeScreenType, Account *user)
{
    switch (homeScreenType)
    {
    case 1:
    {
        directionBoardMenu(user);
        break;
    }

    case 2:
    {
        teacherMenu(user);
        break;
    }

    case 3:
    {
        cleaningStaffMenu(user);
        break;
    }

    case 4:
    {
        studentMenu(user);
        break;
    }
    }
}