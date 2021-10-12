// person class
#include "Person.h"
#include <string>
#include <iostream>
#include <vector>


// Default constructor for a person, sets name and id number to known defaults
Person::Person() 
{
    name = "?";
    id_num = 0;
    
}

// Constructor that allows for a person to be created and immediately given a 
// name
Person::Person(std::string pname)
{
    name = pname;
    id_num = 0;
}

// Takes a string as input to assign a name to a person
void Person::setName(std::string pname)
{
    name = pname;
}

// Returns the name of a person 
std::string Person::getName() const
{
    return name;
}

// Takes a pointer to the global current_id (either student or teacher), 
// assigns the current value to a person, then increments the current_id
void Person::setIdNum(int* pid_num)
{
    id_num = *pid_num;
    *pid_num++;
}

// Returns a persons id number
int Person::getIdNum()
{
    return id_num;
}

// Adds a course  to the list of courses a person is enrolled in
void Person::enrol(Course* course_name)
{
    // Returns if the person is already enrolled in the course
    for(int i = 0; i < courses.size(); i++) {
        if(courses[i] == course_name){
            std::cout << "You are already enrolled in this course" << std::endl;
            return;
        }
    }

    courses.push_back(course_name);

    return;
}

std::vector<Course*> &Person::getCourses()
{
    return courses;
}

// Prints a formatted list of the courses a person is enrolled in
void Person::printCourses()
{
    std::cout << "The courses you are currently enrolled in are: " << std::endl;
    for(int i = 0; i < courses.size(); i++) {
        std::cout << courses[i]->getCourseId() << " " << courses[i]->getName() << std::endl;
    }
  
}

// Removes a course from the list a person is enrolled in
void Person::leaveCourse(Course* exit_course) 
{
    for(int i = 0; i < courses.size(); i++) {
        if(courses[i] == exit_course){
            courses.erase(courses.begin()+i);
            return;
        }
    }
  
}

Person::~Person()
{

}