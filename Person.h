#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "Course.h"
// Defines the person parent class
class Person 
{
public:  
    Person();
    ~Person();
    Person(std::string pname);

    void setName(std::string pname);
    std::string getName() const;

    void enrol(Course* new_course);
    void leaveCourse(Course* exit_course);
    void printCourses();

    virtual void getGrades() = 0; // virtual function to print the grades a person has permission to see

private:
    std::string name;
    int id_num;
    std::vector <Course*> courses;
};

#endif