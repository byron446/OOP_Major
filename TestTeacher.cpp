// teacher class
#include "TestTeacher.h"
#include "TestPerson.h"
#include <string>
#include <iostream>


TestTeacher::TestTeacher()
{
    
}

std::string* TestTeacher::getClassList(std::string course_name)
{
    int count = 0;
    for(int i = 0; i < sizeof(people)/sizeof(people[0]); i++){
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
            class_list[current] = people[i].getName();
        }
    }
    return class_list;
  
}

void TestTeacher::printGrades()
{
    if(getCourseNames().size() < 2){
        std::string* classlist = getClassList(getCourseNames().at(0));    
        std::cout << "The students enrolled in this class are: "<< std::endl;
        for(int i = 0; i < sizeof(classlist)/sizeof(classlist[0]); i++){
            std::cout << classlist[i] << std::endl;
        }
    } else{
        std::cout << "Please enter which course you would like to print the grades for:" << std::endl;
        for (int i = 0; i < getCourseNames().size(); i++) {
            std::cout << i << ". " << getCourseNames().at(i) << std::endl;
        }
        int course;
        std::cin >> course;

        std::string* classlist = getClassList(getCourseNames().at(course));    
        std::cout << "The students enrolled in this class are: "<< std::endl;
        for(int i = 0; i < sizeof(classlist)/sizeof(classlist[0]); i++){
            std::cout << classlist[i] << std::endl;
        }

    }
    

}

TestTeacher::~TestTeacher()
{

}