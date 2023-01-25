#ifndef ACCOUNT_VALIDATOR_H
#define ACCOUNT_VALIDATOR_H

#include <iostream>
#include <string>

class AccountValidator
{
public:
    AccountValidator();

    ~AccountValidator();

    bool validation(std::string email, std::string password);
};

#endif