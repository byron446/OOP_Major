#include <iostream>
#include <vector>
#include <string>
#include "TestPerson.h"
#include "TestTeacher.h"


TestPerson* people;
int main()
{
    std::string* courses = new std::string[4];
    std::string* course_ids = new std::string[4];
    people = new TestTeacher[4];
    for(int i = 0; i < 4; i++){
        std::string new_name;
        std::cin >> new_name;
        people[i].setName(new_name);
        std::cin >> courses[i];
        std::cin >> course_ids[i];
    }

    people[0].enrol(courses[0],course_ids[0]);
    std::cout << "got to here" << std::endl;
    people[1].enrol(courses[0],course_ids[0]);
    people[2].enrol(courses[1],course_ids[1]);
    people[3].enrol(courses[0],course_ids[0]);   

    people[0].printGrades(); 


}