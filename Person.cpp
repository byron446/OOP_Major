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

Person::Person(int num_courses)
{
    name = "?";
    id_num = 0;
    
}

void Person::enrol(Course* course_name)
{
    courses.push_back(course_name);
}