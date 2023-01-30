#include <iostream>
#include <string>
#include <vector>
#include <optional>

#include "../include/AccountValidator.h"
#include "../include/Account.h"
#include "../include/DirectionBoard.h"
#include "../include/CleaningStaff.h"
#include "../include/Student.h"
#include "../include/Teacher.h"

AccountValidator::AccountValidator()
{
    std::vector<std::string> classes{"301", "302", "303"};
    std::vector<std::string> subjects{"Math", "Portuguese"};

    std::vector<Account *> data{
        new DirectionBoard("Nicolas", "Vargas", "129381", "519381239", "nico@gmail.com", "1", "DirectionBoard", "Masculino", "11/02/2004", "Director", 1),
        new Student("Pedro", "Carvalho", "5343141", "513213139", "pedro@gmail.com", "2", "Student", "Masculino", "15/04/2004", 4, "532413", 301, subjects),
        new CleaningStaff("Joao", "Ruas", "129381", "519381239", "joao@gmail.com", "3", "CleaningStaff", "Masculino", "12/04/2003", "Person", 3),
        new Teacher("Kawan", "Miranda", "129381", "519381239", "kawan@gmail.com", "4", "Math Teacher", "Masculino", "22/10/2003", 2, "Math", classes)};

    this->data = data;
}

AccountValidator::~AccountValidator() {}

std::optional<Account*> AccountValidator::validation(std::string email, std::string password)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (email == data[i]->getEmail() && password == data[i]->getPassword())
        {
            return data[i];
        }
    }
    return std::nullopt;
}
