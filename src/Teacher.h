#include <iostream>
#include <string>
#include <vector>
#include "Employee.h"

class Teacher : public Employee{
private:
    std::string subject;
    std::vector<std::string> classes;

public:
    Teacher(std::string name,
        std::string surname, 
        std::string cpf,
        std::string phoneNumber, 
        std::string email,
        std::string password, 
        std::string occupation,
        std::string gender, 
        std::string birthday,
        std::string subject,
        std::vector<std::string> &classes)
    : Employee(name, surname, cpf, phoneNumber, email, password, occupation, gender, birthday){
        this->subject = subject;
        this->classes = classes; 
    }
    ~Teacher();
    void setSubject(std::string subject);
    void setClasses(std::vector<std::string> &classes);
    std::string getSubject();
    std::vector<std::string> getClasses();
};