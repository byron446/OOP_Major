// person class
#include "Person.h"
#include <string>
#include <iostream>
#include <vector>

Person::Person() 
{
    name = "?";
    id_num = 0;
    
}

Person::Person(std::string pname)
{
    name = pname;
    id_num = 0;
}

void Person::setName(std::string pname)
{
    name = pname;
}

std::string Person::getName()
{
    return name;
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
    std::cout << "The courses you are currently enrolled in are: ";
    for(int i = 0; i < courses.size(); i++) {
        std::cout << courses[i]->name << " " << courses[i]->course_id << std::endl;
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