#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"


std::vector <Person*> people;
int main()
{
    Course* courses = new Course[4];
    people.push_back(new Teacher);
    for(int i = 0; i < 4; i++){
        people.push_back(new Student); 
        std::string new_name;
        std::cin >> new_name;
        people.at(i)->setName(new_name);
        std::string course_name;
        std::cin >> course_name;
        courses[i].setName(course_name);

        std::string course_id;
        std::cin >> course_id;
        courses[i].setCourseID(course_id);
    }

    people.at(0)->enrol(&courses[0]);
    people.at(1)->enrol(&courses[0], 50);
    people.at(2)->enrol(&courses[1], 75);
    people.at(3)->enrol(&courses[0], 90);   
    
    people.at(0)->printGrades(); 
    return 0;

}