#include <iostream>
#include <string>

#include "../include/Employee.h"

Employee::~Employee(){}

double Employee::annualSalary(){
    return this->salary * 12;
}

void Employee::setSalary(double salary){
    this->salary = salary;
}

void Employee::setShift(std::string shift){
    this->shift = shift;
}

double Employee::getSalary(){
    return this->salary;
}

std::string Employee::getShift(){
    return this->shift;
}

