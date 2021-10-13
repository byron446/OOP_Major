#ifndef TESTSTUDENT_H
#define TESTSTUDENT_H

#include "TestPerson.h"
#include <string>
#include <vector>
class TestStudent: public TestPerson
{
public:
    TestStudent();

    void enrolStudent(std::string new_course, std::string course_id, int grade);
    void leaveCourseStudent(std::string exit_course);
    virtual void printGrades();
    ~TestStudent();

private:
    std::vector<int> grades; 
    
};

#endif