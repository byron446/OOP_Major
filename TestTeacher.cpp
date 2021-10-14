// teacher class
#include "TestTeacher.h"
#include "TestPerson.h"
#include <string>
#include <iostream>

TestTeacher::TestTeacher()
{
    
}

std::string* TestTeacher::getClassList(std::string course_name, std::string* names)
{
    int count = 0;
    for(int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
        for(int j = 0; j < getCourseNames().size();j++){
            if(getCourseNames().at(j) == course_name){
                count++;
            }
        }
    }
    std::string* class_list = new std::string[count];
    int current = 0;
    for(int i = 0; i < getCourseNames().size();i++){
        if(getCourseNames().at(i) == course_name){
            class_list[current] = names[i];
        }
    }
    return class_list;
  
}

void TestTeacher::printGrades()
{
    if(getCourseNames().size() < 2){
        std::string* classlist = getClassList(getCourseNames().at(1), names);    
        std::cout << 
        for(int i = 0; i < sizeof(classlist)/sizeof(classlist[0]); i++){
    }
    
    std::cout << "Please enter which course you would like to print the grades for:";
}