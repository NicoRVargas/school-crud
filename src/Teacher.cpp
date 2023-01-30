#include <iostream>
#include <string>

#include "../include/Teacher.h"

Teacher::~Teacher() {}

void Teacher::setSubject(std::string subject)
{
    this->subject = subject;
}
void Teacher::setClasses(std::vector<std::string> &classes)
{
    this->classes = classes;
}
std::string Teacher::getSubject()
{
    return this->subject;
}
std::vector<std::string> Teacher::getClasses()
{
    return this->classes;
}

double Teacher::submitGrade()
{
    return 10;
}