#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <vector>
class Student: public Person
{
public:
    Student();

    virtual void printGrades();
    ~Student();

private:
    std::vector<int> grades; // map courses to grades
    
};

#endif