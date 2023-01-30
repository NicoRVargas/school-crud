#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "Account.h"

class Menu
{
public:
    Menu();
    
    ~Menu();

    void run();

    Account* loginScreen();

    void homeScreen(int homeScreenType);
};

#endif