#include <iostream>
#include <string>
#include <vector>

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
void Student::setSubjects(std::vector<std::string> subjects)
{
    this->subjects = subjects;
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
std::vector<std::string> Student::getSubjects()
{
    return this->subjects;
}
