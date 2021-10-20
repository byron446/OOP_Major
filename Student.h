#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <vector>

// Defines person class, inherits from person base class
class Student: public Person
{
public:
    // Default constructor
    Student();

    // printGrades to override pure virtual method in base class
    virtual void printGrades();

    //enrol function and leave course methods that also handle adding/removing grades
    virtual void enrol(Course* new_course, int grade);
    void setGrade(int grade, Course* pcourse);
    int getGrade(Course* pcourse);
    void leaveCourseStudent(Course* exit_course);
    ~Student();

private:
    // vector to contain grade for each subject
    std::vector<int> grades; 
    
};

#endif