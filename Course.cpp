// course class
#include "Course.h"
#include "Lesson.h"
#include <string>
#include <iostream>


// default constructer
Course::Course()
{
    name = "?";
    course_id = "??";
}

Course::Course(std::string pname, std::string pid)
{
    name = pname;
    course_id = pid;
}

Course::Course(int lesson_num)
{
    name = "?";
    course_id = "??";
}

// setting the name of course
void Course::setName(std::string pname)
{
    name = pname;
}

// getting the name of the course
std::string Course::getName()
{
    return name;
}

// setting the ID of the course
void Course::setCourseID(std::string pid)
{
    course_id = pid;
}

// getting the ID of the course
std::string Course::getCourseId()
{
    return course_id;
}

// adds a lesson to the course
void Course::addLesson(Lesson* new_lesson)
{
    lessons.push_back(new_lesson);
}

// returns the lesson within a course
std::vector<Lesson*> &Course::getLessons()
{
    return lessons;
}

// destructor
Course::~Course()
{

}