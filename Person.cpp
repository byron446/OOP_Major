// person class
#include "Person.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>


// Default constructor for a person, sets name and id number to known defaults
Person::Person() 
{
    name = "?";
    id_num = 0;
    
}

// Constructor that allows for a person to be created and immediately given a 
// name
Person::Person(std::string pname)
{
    name = pname;
    id_num = 0;
}

// Takes a string as input to assign a name to a person
void Person::setName(std::string pname)
{
    name = pname;
}

// Returns the name of a person 
std::string Person::getName() const
{
    return name;
}

// Takes a pointer to the global current_id (either student or teacher), 
// assigns the current value to a person, then increments the current_id
void Person::setIdNum(int* pid_num)
{
    id_num = *pid_num;
    (*pid_num)++;
}

// Returns a persons id number
int Person::getIdNum()
{
    return id_num;
}

// Adds a course  to the list of courses a person is enrolled in
bool Person::enrol(Course* new_course)
{
    // Returns if the person is already enrolled in the course
    for(int i = 0; i < courses.size(); i++) {
        if(courses[i]->getName() == new_course->getName()){
            std::cout << "You are already enrolled in this course" << std::endl;
            return false;
        }
    }
    // If the person is not already enrolled, add the new course to the courses vector
    courses.push_back(new_course);

    return true;
}

// Returns the courses vector by reference
std::vector<Course*> &Person::getCourses()
{
    return courses;
}

int Person::getCourseIndex(Course* pcourse)
{
    for(int i = 0; i < courses.size(); i++){
        if (courses.at(i)->getName() == pcourse->getName()){
            return i;
        }
    }
    return -1;
}

// Prints a formatted list of the courses a person is enrolled in
void Person::printCourses()
{
    std::cout << "The courses you are currently enrolled in are:" << std::endl;
    for(int i = 0; i < courses.size(); i++) {
        std::cout << courses.at(i)->getCourseId() << " " << courses.at(i)->getName() << std::endl;
    }
    return;
}

// Removes a course from the list a person is enrolled in, and returns the 
// index at which the course was removed. If the student was not enrolled, 
// return -1
bool Person::leaveCourse(Course* exit_course)  
{
    // Checks the name of each course against the course the student is 
    // leaving
    for(int i = 0; i < courses.size(); i++) {
        if(courses.at(i)->getName() == exit_course->getName()){
            courses.erase(courses.begin()+i);
            return true;
        }
    }

    // Return -1 to signify that person was not enrolled in exit_course
    return false;
}

// prints a timetable of all lessons for each course a student is enrolled in
void Person::printTimetable()
{
    std::string lessons[4] = {"Lecture", "Tutorial", "Workshop", "Practical"};
    std::cout << "Time              Monday              Tuesday             Wednesday               Thursday                Friday" << std::endl;
    // loops for each hour slot
    for(int time = 900; time < 1800; time+=100){
        std::cout << time << "          ";
        // loops for each day
        for(int day = 0; day < 5; day++){
            // loops through each course
            bool lesson_at_time = false;
            for(int i = 0; i < getCourses().size(); i++){
                // loops through each lesson
                for(int j = 0; j< getCourses().at(i)->getLessons().size(); j++){
                    // checks if the specified lesson occurs on that day
                    if(getCourses().at(i)->getLessons().at(j)->getDate() == day){

                        // stores the lesson start and end time
                        int lesson_start = getCourses().at(i)->getLessons().at(j)->getTime();
                        int lesson_end = lesson_start + getCourses().at(i)->getLessons().at(j)->getDuration();

                        // if the time is between the lesson start and end print the course name and lesson type
                        if(lesson_start <= time && lesson_end > time){
                            std::string current_lesson = lessons[(int)getCourses().at(i)->getLessons().at(j)->getLesson()];       
                            std::cout << getCourses().at(i)->getName() << "  " << current_lesson;
                            lesson_at_time = true;
                        }
                    }
                }
            }
            //Outputs extra format spacing if there was not a lesson at a given day and time
            if(lesson_at_time == false){
               std::cout << "               "; 
            }
            std::cout << "      ";
        }
        std::cout << std::endl << std::endl;
    }
}


void Person::exportTimetable(){

    //creates a string for the filename of format aXXXXXTimetable.csv
    std::string filename = "a";
    filename = filename.append(std::to_string(getIdNum()));
    filename = filename.append("Timetable.csv");
    
    std::ofstream timetablefile;
    timetablefile.open (filename);
    timetablefile << "Time ,";
    timetablefile << "Monday ,";
    timetablefile << "Tuesday ,";
    timetablefile << "Wednesday ,";
    timetablefile << "Thursday ,";
    timetablefile << "Friday ,";
    timetablefile << "\n";
   
    
    std::string lessons[4] = {"Lecture", "Tutorial", "Workshop", "Practical"};
    for(int time = 900; time < 1800; time+=100){
        timetablefile << time << ",";
        // loops for each day
        for(int day = 0; day < 5; day++){
            // loops through each course
            bool lesson_at_time = false;
            for(int i = 0; i < getCourses().size(); i++){
                // loops through each lesson
                for(int j = 0; j< getCourses().at(i)->getLessons().size(); j++){
                    // checks if the specified lesson occurs on that day
                    if(getCourses().at(i)->getLessons().at(j)->getDate() == day){

                        // stores the lesson start and end time
                        int lesson_start = getCourses().at(i)->getLessons().at(j)->getTime();
                        int lesson_end = lesson_start + getCourses().at(i)->getLessons().at(j)->getDuration();

                        // if the time is between the lesson start and end print the course name and lesson type
                        if(lesson_start <= time && lesson_end > time){
                            std::string current_lesson = lessons[(int)getCourses().at(i)->getLessons().at(j)->getLesson()];       
                            timetablefile << getCourses().at(i)->getName() << " "; 
                            timetablefile << current_lesson;
                            lesson_at_time = true;
                        }
                    }
                }
            }
            timetablefile << "," ;
            //Outputs extra format spacing if there was not a lesson at a given day and time
            // if(lesson_at_time == false){
            //    std::cout << "               "; 
            // }
            // std::cout << "      ";
        }
        timetablefile << "\n";
    }

    timetablefile.close();
}




// Default destructor
Person::~Person()
{

}