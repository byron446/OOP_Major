// student class
#include "Student.h"
#include "Person.h"
#include <string>
#include <iostream>

// Default constructor
Student::Student()
{

}

// enrols a student in a new course, by taking a pointer to the new course, 
// and a current grade.
void Student::enrol(Course* new_course, int grade)
{
    // call enrol method to add new_course to vector of courses
    bool course_add = Person::enrol(new_course);

    // if the student was not already enrolled, add a 
    if (course_add == true){
        grades.push_back(grade);
    }
}

void Student::leaveCourseStudent(Course* exit_course)
{
    int i = leaveCourse(exit_course);
    grades.erase(grades.begin()+i);
}

void Student::printGrades()
{
    std::cout << "Your grades in each subject are:" << std::endl;
    for(int i = 0; i < getCourses().size(); i++){
        std::cout << getCourses().at(i)->getCourseId() << " " << getCourses().at(i)->getName() << ": " << grades.at(i) << std::endl;
    }
}

// Default destructor
Student::~Student()
{

}
