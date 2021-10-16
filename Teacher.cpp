// teacher class
#include "Teacher.h"
#include "Person.h"
#include <string>
#include <iostream>

Teacher::Teacher()
{
    
}

std::vector<Person*> &Teacher::getClassList(std::string course_name)
{
    std::vector<Person*> class_list;

    for (int i = 0; i < sizeof(people)/sizeof(people[0]); i++){
        for(int j = 0; j < people[i].getCourses().size();i++){
            if(people[i].getCourses().at(j).getName() == course_name){
                class_list.push_back(&people[i]);
            }
        }
    }
}

void Teacher::printGrades()
{
    if(getCourses().size() < 2){
        std::vector<Person*> class_list = getClassList(getCourses().at(0).getName());    
        std::cout << "The students enrolled in this class are: "<< std::endl;
        for(int i = 0; i < sizeof(class_list)/sizeof(class_list.at(0)); i++){
            std::cout << class_list.at(i)->getName() << std::endl;
        }
    } else{
        std::cout << "Please enter which course you would like to print the grades for:" << std::endl;
        for (int i = 0; i < getCourses().size(); i++) {
            std::cout << i << ". " << getCourses().at(i).getName() << std::endl;
        }
        int course;
        std::cin >> course;

        std::vector<Person*> class_list = getClassList(getCourses().at(course).getName());    
        std::cout << "The students enrolled in this class are: "<< std::endl;
        for(int i = 0; i < sizeof(class_list)/sizeof(class_list.at(0)); i++){
            std::cout << class_list.at(i)->getName() << std::endl;
        }
    }    
}

Teacher::~Teacher()
{

}
// void TestTeacher::printGrades()
// {
//     if(getCourseNames().size() < 2){
//         std::string* classlist = getClassList(getCourseNames().at(0), people);    
//         std::cout << "The students enrolled in this class are: "<< std::endl;
//         for(int i = 0; i < sizeof(classlist)/sizeof(classlist[0]); i++){
//             std::cout << classlist[i] << std::endl;
//         }
//     } else{
//         std::cout << "Please enter which course you would like to print the grades for:" << std::endl;
//         for (int i = 0; i < getCourseNames().size(); i++) {
//             std::cout << i << ". " << getCourseNames().at(i) << std::endl;
//         }
//         int course;
//         std::cin >> course;

//         std::string* classlist = getClassList(getCourseNames().at(course), people);    
//         std::cout << "The students enrolled in this class are: "<< std::endl;
//         for(int i = 0; i < sizeof(classlist)/sizeof(classlist[0]); i++){
//             std::cout << classlist[i] << std::endl;
//         }

//     }
    

// }

// TestTeacher::~TestTeacher()
// {

// }