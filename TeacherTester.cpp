#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"


std::vector <Student*> students;
int main()
{
    Course* courses = new Course[4];
    Teacher* teach = new Teacher;
    for(int i = 0; i < 4; i++){
        students.push_back(new Student); 
        std::string new_name;
        std::cin >> new_name;
        students.at(i)->setName(new_name);
        std::string course_name;
        std::cin >> course_name;
        courses[i].setName(course_name);

        std::string course_id;
        std::cin >> course_id;
        courses[i].setCourseID(course_id);
    }

    teach->Person::enrol(&courses[0]);
    students.at(1)->enrol(&courses[0], 50);
    students.at(2)->enrol(&courses[1], 75);
    students.at(3)->enrol(&courses[0], 90);   
    
    teach->printGrades(); 
    return 0;

}