#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>

extern Person* people;

class Teacher: public Person
{
public:
    Teacher();
    

    virtual void printGrades();
    ~Teacher();
private:
    std::vector<Person*> &getClassList(std::string course_name);
};

#endif
