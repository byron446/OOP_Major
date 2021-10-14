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
    void enrolStudent(Course new_course, int grade);
    void leaveCourseStudent(Course exit_course);
    ~Student();

private:
    std::vector<int> grades; 
    
};

#endif