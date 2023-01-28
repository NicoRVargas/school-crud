#include <iostream>
#include <vector>

#include "../include/Menu.h"
#include "../include/Account.h"
#include "../include/DirectionBoard.h"
#include "../include/CleaningStaff.h"
#include "../include/Student.h"
#include "../include/Teacher.h"

int main()
{
    std::vector<std::string>classes{"301", "302", "303"};
    std::vector<std::string>subjects{"Math", "Portuguese"};

    std::vector<Account*>data {
        new DirectionBoard("Nicolas", "Vargas", "129381", "519381239", "nico@gmail.com", "123", "DirectionBoard", "Masculino", "11/02/2004", "Director", 1),
        new Student("Pedro", "Carvalho", "5343141", "513213139", "pedro@gmail.com", "1233", "Student", "Masculino", "15/04/2004", 3, "532413", 301, subjects),
        new DirectionBoard("Nicolas", "Vargas", "129381", "519381239", "nico@gmail.com", "123", "DirectionBoard", "Masculino", "11/02/2004", "Director", 1),
        new Teacher("Joao", "Vargas", "129381", "519381239", "nico@gmail.com", "123", "Math Teacher", "Masculino", "11/02/2004", 1213, "Math", classes)};



    Menu* menu = new Menu;
    return 0;
}
