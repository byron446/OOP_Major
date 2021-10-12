#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "Course.h"
// Defines the person parent class
class Person 
{
public:  
    
    // Default constructor/destructor, and a constructor that takes a name
    Person();
    ~Person();
    Person(std::string pname);

    // Access functions for the name of a person
    void setName(std::string pname);
    std::string getName() const;

    // Access functions for the id number of a person
    void setIdNum(int* pid_num);
    int getIdNum();

    // Functions to add or remove a course, and to print all courses a person 
    // is currently enrolled in
    void enrol(Course* new_course);
    std::vector<Course*> &getCourses();
    void leaveCourse(Course* exit_course);
    void printCourses();



    // virtual function to print the grades a person has permission to see
    virtual void printGrades() = 0; 

private:
    std::string name;
    int id_num;
    std::vector <Course*> courses;
};

#endif