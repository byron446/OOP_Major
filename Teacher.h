#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>

// Includes external global variable people, which contains all students and 
// teachers
extern Person* people;

class Teacher: public Person
{
public:
    // Default constructor
    Teacher();
    
    // printGrades to override pure virtual method in base class
    virtual void printGrades();

    // Default destructor
    ~Teacher();
private:
    // method only called by printGrades to generate list of people enrolled 
    // in a course
    std::vector<Person*> &getClassList(std::string course_name);
};

#endif
