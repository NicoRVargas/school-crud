#include <iostream>
#include "Teacher.h"
#include <string>

Teacher::~Teacher(){}

void Teacher::setSubject(std::string subject){
    this->subject = subject;
}

void Teacher::setClasses(std::vector<std::string> &classes){
    this->classes = classes;
}

std::string Teacher::getSubject(){
    return this->subject;
}

std::vector<std::string> Teacher::getClasses(){
    return this->classes;
}