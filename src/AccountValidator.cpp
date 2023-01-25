#include <iostream>
#include "AccountValidator.h"
#include <string>

AccountValidator::AccountValidator(){}

AccountValidator::~AccountValidator(){}

bool AccountValidator::validation(std::string email, std::string password){
    if(email != "nicolas.vargas8@gmail.com" || password != "123"){
        return false;
    }
    
    return true;
}