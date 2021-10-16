// student class
#include "Student.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <map>

Student::Student()
{

}

void Student::enrolStudent(Course new_course, int grade)
{
    enrol(new_course);
    grades.push_back(grade);
}

void Student::leaveCourseStudent(Course exit_course)
{
    int i = leaveCourse(exit_course);
    grades.erase(grades.begin()+i);
}

void Student::printGrades()
{
    std::cout << "Your grades in each subject are: " << std::endl;
    for(int i = 0; i < getCourses().size(); i++){
        std::cout << getCourses().at(i).getCourseId() << " " << getCourses().at(i).getName() << ": " << grades.at(i) << std::endl;
    }
}
