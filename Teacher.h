#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>

extern Person* people;

class Teacher: public Person
{
public:
    Teacher();
    ~Teacher();

    virtual void getGrades();

private:

};

#endif
// extern TestPerson* people;
// class TestTeacher: public TestPerson
// {
// public:
//     TestTeacher();
//     ~TestTeacher();

    
//     virtual void printGrades();

// private:
//     std::string* getClassList(std::string course_name, TestPerson* people);
// };