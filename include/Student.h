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
    std::vector<std::string> subjects;
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
            int type,
            std::string studentID,
            int studentClass,
            std::vector<std::string> subjects)
        : Account(name, surname, cpf, phoneNumber, email, password, occupation, gender, birthday, type)
    {
        this->studentID = studentID;
        this->studentClass = studentClass;
        this->subjects = subjects;
    }
    
    ~Student();
    
    void setStudentClass(int studentClass);
    
    void setAttendance(int attendance);

    void setSubjects(std::vector<std::string> subjects);
    
    std::string getStudentID();
    
    std::vector<double> getGrades();
    
    int getStudentClass();
    
    int getAttendance();

    std::vector<std::string> getSubjects();
};

#endif