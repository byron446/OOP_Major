#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student: public Person
{
    Student();

    virtual void printGrades();
    ~Student();

    int* grades; // map courses to grades
    
};

#endif