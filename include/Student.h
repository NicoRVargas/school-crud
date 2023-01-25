#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

class Student : public Account
{
private:
    std::string studentID;
    std::vector<double> grades;
    int studentClass;
    int attendance;

public:
    Student(std::string name,
            std::string surname,
            std::string cpf,
            std::string phoneNumber,
            std::string email,
            std::string password,
            std::string occupation,
            std::string gender,
            std::string birthday,
            std::string studentID,
            int studentClass)
        : Account(name, surname, cpf, phoneNumber, email, password, occupation, gender, birthday)
    {
        this->studentID = studentID;
        this->studentClass = studentClass;
    }
    
    ~Student();
    
    void setStudentClass(int studentClass);
    
    void setAttendance(int attendance);
    
    std::string getStudentID();
    
    std::vector<double> getGrades();
    
    int getStudentClass();
    
    int getAttendance();
};

#endif