#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <typeinfo>

#include "Account.h"

class Menu
{
public:
    Menu();
    
    ~Menu();

    void run();

    Account* loginScreen();

    void homeScreen(int homeScreenType, Account* user);

    void studentMenu(Account* user);

    void teacherMenu(Account *user);
    
    void directionBoardMenu(Account *user);

    void cleaningStaffMenu(Account *user);
};

#endif