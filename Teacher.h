#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>
class Teacher: public Person
{
public:
    Teacher();
    ~Teacher();

    virtual void getGrades();

private:

};

#endif