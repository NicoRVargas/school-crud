#include <iostream>
#include <string>

class AccountValidator{
public: 
    AccountValidator();
    ~AccountValidator();
    bool validation(std::string email, std::string password);
};