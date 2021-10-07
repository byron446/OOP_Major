#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Course.h"
// Defines the person parent class
class Person 
{
public:  
    Person();
    ~Person();
    Person(int num_courses); // Constructor that takes the number of courses as a parameter
    void enrol(std::string course_id);
    virtual void getGrades() = 0; // virtual function to print the grades a person has permission to see

    std::string name;
    int id_num;
    Course* courses;
};

#endif