// student class
#include "TestStudent.h"
#include "TestPerson.h"
#include <string>
#include <iostream>
#include <map>

TestStudent::TestStudent()
{
    
}

void TestStudent::enrolStudent(std::string new_course, std::string course_id, int grade)
{
    enrol(new_course, course_id);
    grades.push_back(grade);
}

void TestStudent::leaveCourseStudent(std::string exit_course)
{
    int i = leaveCourse(exit_course);
    grades.erase(grades.begin()+i);
}

void TestStudent::printGrades()
{
    std::cout << "Your grades in each subject are: " << std::endl;
    for(int i = 0; i < getCourseNames().size(); i++){
        std::cout << getCourseid().at(i) << " " << getCourseNames().at(i) << ":  " << grades.at(i);
    }
}
