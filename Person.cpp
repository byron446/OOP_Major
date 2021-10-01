// person class
#include "Person.h"
#include <string>
#include <iostream>

Person::Person() 
{
    name = "?";
    id_num = 0;
    enrolments = new(std::string[4]);
}

Person::Person(int num_courses)
{
    name = "?";
    id_num = 0;
    enrolments = new(std::string[num_courses]);    
}