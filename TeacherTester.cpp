#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Teacher.h"


Person* people;
int main()
{
    Course* courses = new Course[4];
    
    people = new Teacher[4];
    for(int i = 0; i < 4; i++){
        std::string new_name;
        std::cin >> new_name;
        people[i].setName(new_name);

        std::string course_name;
        std::cin >> course_name;
        courses[i].setName(course_name);

        std::string course_id;
        std::cin >> course_id;
        courses[i].setCourseID(course_id);
    }

    people[0].enrol(&courses[0]);
    std::cout << "got to here" << std::endl;
    people[1].enrol(&courses[0]);
    people[2].enrol(&courses[1]);
    people[3].enrol(&courses[0]);   

    people[0].printGrades(); 
    return 0;

}