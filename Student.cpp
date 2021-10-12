// student class
#include "Student.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <map>

Student::Student()
{

}

void Student::printGrades()
{
    std::cout << "Your grades in each subject are: " << std::endl;
    for(int i = 0; i < getCourses().size(); i++){
        std::cout << getCourses().at(i)->getCourseId();
    }
}
