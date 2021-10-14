// person class
#include "TestPerson.h"
#include <string>
#include <iostream>
#include <vector>


// Default constructor for a person, sets name and id number to known defaults
TestPerson::TestPerson() 
{
    name = "?";
    id_num = 0;
    
}

// Constructor that allows for a person to be created and immediately given a 
// name
TestPerson::TestPerson(std::string pname)
{
    name = pname;
    id_num = 0;
}

// Takes a string as input to assign a name to a person
void TestPerson::setName(std::string pname)
{
    name = pname;
}

// Returns the name of a person 
std::string TestPerson::getName() const
{
    return name;
}

// Takes a pointer to the global current_id (either student or teacher), 
// assigns the current value to a person, then increments the current_id
void TestPerson::setIdNum(int* pid_num)
{
    id_num = *pid_num;
    (*pid_num)++;
}

// Returns a persons id number
int TestPerson::getIdNum()
{
    return id_num;
}

// Adds a course  to the list of courses a person is enrolled in
void TestPerson::enrol(std::string new_course, std::string course_id)
{
    //Returns if the person is already enrolled in the course
    if(course_names.size()!=0){
        for(int i = 0; i < course_names.size(); i++) {
            if(course_names.at(i) == new_course){
                std::cout << "You are already enrolled in this course" << std::endl;
                return;
            }

        }
    }

    course_names.push_back(new_course);
    course_ids.push_back(course_id);
    return;
}

std::vector<std::string> &TestPerson::getCourseNames()
{
    return course_names;
}
std::vector<std::string> &TestPerson::getCourseid()
{
    return course_ids;
}

// Prints a formatted list of the courses a person is enrolled in
void TestPerson::printCourses()
{
    if(course_names.size()!=0){
        std::cout << "The courses you are currently enrolled in are:" << std::endl;
        for(int i = 0; i < course_names.size(); i++) {
            std::cout << course_ids.at(i) << " " << course_names.at(i) << std::endl;
        }
    }
  
}

// Removes a course from the list a person is enrolled in
int TestPerson::leaveCourse(std::string exit_course)  
{
    for(int i = 0; i < course_names.size(); i++) {
        if(course_names[i] == exit_course){
            course_names.erase(course_names.begin()+i);
            course_ids.erase(course_ids.begin()+i);
            return i;
        }
    }
    return -1;
}

TestPerson::~TestPerson()
{

}