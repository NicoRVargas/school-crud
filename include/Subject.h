#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <string>
#include <vector>

class Subject
{
private:
    std::vector<float> grades;
    std::string subjectName;

public:
    Subject(
        std::string subjectName,
        std::vector<float> grades);
    ~Subject();
    void addGrade(float grade);
    void removeGrade(float grade);
    void changeGrade(int index, float newGrade);
    float getGrade(int index);
    float subjectAverage();
};

#endif
