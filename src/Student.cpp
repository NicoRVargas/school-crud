#include <iostream>
#include <string>
#include <vector>

#include "../include/Student.h"
#include "../include/Account.h"

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
void Student::showStudentGrades() // VAMO TER Q FAZER UM TREM PRA ORDENAR AS MATERIAS DO ALUNO E AS NOTAS BONITIN MAS POR ENQUANTO E ISSO
{
    std::vector<double> studentGrades = this->getGrades();
    for (int i = 0; i < studentGrades.size(); i++)
    {
        std::cout << studentGrades[i] << " ";
    }
    std::cout << "\n";
}
void Student::showStudentAccountInformation(Account *user)
{
    std::cout << "Name: " << user->getName() << " " << user->getSurname();
    std::cout << "\nEmail: " << user->getEmail();
    std::cout << "\nPassword: " << user->getPassword();
    std::cout << "\nCPF: " << user->getCpf();
    std::cout << "\nPhone Number: " << user->getPhoneNumber();
    std::cout << "\nGender: " << user->getGender();
    std::cout << "\nStudent ID: " << ((Student *)user)->getStudentID();
    std::cout << "\nBirthday: " << user->getBirthday();
    std::cout << std::endl;
}
