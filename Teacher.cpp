// teacher class
#include "Teacher.h"
#include "Person.h"
#include "Student.h"
#include <string>
#include <iostream>


// Default constructor
Teacher::Teacher()
{
    
}
void Teacher::enrol(Course* new_course, int grade)
{
    return;
}
// returns a vector of pointers to people that are enrolled in the course with 
// name course_name
std::vector<Student*> Teacher::getClassList(std::string course_name)
{
    std::vector<Student*> class_list;

    for (int i = 0; i < students.size(); i++){

        for(int j = 0; j < students.at(i)->getCourses().size();j++){
            if(students.at(i)->getCourses().at(j)->getName() == course_name){
                class_list.push_back(students.at(i));
            }
        }
    }
    return class_list;
}

// prints a formatted list of the grades of every student enrolled in a course 
// the teacher is teaching
void Teacher::printGrades()
{
    // Automatically prints the grades if a teacher is only teaching one 
    // course, otherwise it takes an input to determine which courses grades 
    // are printed
    if(getCourses().size() < 2){
        std::vector<Student*> class_list = getClassList(getCourses().at(0)->getName()); 
        std::cout << "The students enrolled in this class are: "<< std::endl;

        for(int i = 0; i < class_list.size(); i++){
            if(class_list.at(i)->getName() == getName()){
                std::cout << class_list.at(i)->getName() << "   (You)" << std::endl;
            }else{
                std::cout << class_list.at(i)->getName() << class_list.at(i)->getGrade(getCourses().at(0)) << std::endl;
            }
        }

    } else{
        std::cout << "Please enter which course you would like to print the grades for:" << std::endl;

        for (int i = 0; i < getCourses().size(); i++) {
            std::cout << i << ". " << getCourses().at(i)->getName() << std::endl;
        }

        int course;
        std::cin >> course;

        std::vector<Student*> class_list = getClassList(getCourses().at(course)->getName()); 

        std::cout << "The students enrolled in this class are: "<< std::endl;

        for(int i = 0; i < class_list.size(); i++){
            std::cout << class_list.at(i)->getName() << class_list.at(i)->getGrade(getCourses().at(course)) << std::endl;
        }
    }    
}

Teacher::~Teacher()
{

}