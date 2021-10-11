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

// Constructor that allows for a person to be created and immediately given a name
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


int* Person::setIdNum(int* pid_num)
{
    id_num = *pid_num;
    *pid_num++;
    return pid_num;
}

int Person::getIdNum()
{
    return id_num;
}

void Person::enrol(Course* course_name)
{
    for(int i = 0; i < courses.size(); i++) {
        if(courses[i] == course_name){
            return;
        }
    }

    courses.push_back(course_name);

    return;
}

void Person::printCourses()
{
    std::cout << "The courses you are currently enrolled in are: " << std::endl;
    for(int i = 0; i < courses.size(); i++) {
        std::cout << courses[i]->getCourseId() << " " << courses[i]->getName() << std::endl;
    }
  
}

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