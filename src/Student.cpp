#include <iostream>
#include <string>

#include "../include/Student.h"

Student::~Student() {}

void Student::setStudentClass(int studentClass)
{
    this->studentClass = studentClass;
}
void Student::setAttendance(int attendance)
{
    this->attendance = attendance;
}
std::string Student::getStudentID()
{
    return this->studentID;
}
std::vector<double> Student::getGrades()
{
    return this->grades;
}
int Student::getStudentClass()
{
    return this->studentClass;
}
int Student::getAttendance()
{
    return this->attendance;
}
