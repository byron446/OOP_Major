#ifndef TESTTEACHER_H
#define TESTTEACHER_H

#include "TestPerson.h"
#include <string>
class TestTeacher: public TestPerson
{
public:
    TestTeacher();
    ~TestTeacher();

    std::string* getClassList(std::string course_name, std::string* names);
    virtual void printGrades();

private:

};

#endif