#ifndef TESTTEACHER_H
#define TESTTEACHER_H

#include "TestPerson.h"
#include <string>

extern TestPerson* people;
class TestTeacher: public TestPerson
{
public:
    TestTeacher();
    ~TestTeacher();

    
    virtual void printGrades();

private:
    std::string* getClassList(std::string course_name, TestPerson* people);
};

#endif