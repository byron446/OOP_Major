#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student: public Person
{
    Student();


    virtual void getGrades();
    ~Student();

    int* grades;
    
};

#endif