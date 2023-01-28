#ifndef ACCOUNT_VALIDATOR_H
#define ACCOUNT_VALIDATOR_H

#include <iostream>
#include <string>
#include <vector>
#include <optional>

#include "Account.h"

class AccountValidator
{
private:
    std::vector<Account*> data;
public:
    AccountValidator();

    ~AccountValidator();

    std::optional<Account*> validation(std::string email, std::string password);
};

#endif