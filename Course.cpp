// course class
#include "Course.h"
#include "Lesson.h"
#include <string>
#include <iostream>


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

void Course::setName(std::string pname)
{
    name = pname;
}

std::string Course::getName()
{
    return name;
}

void Course::setCourseID(std::string pid)
{
    course_id = pid;
}

std::string Course::getCourseId()
{
    return course_id;
}

void Course::addLesson(Lesson* new_lesson)
{
    lessons.push_back(new_lesson);
}
std::vector<Lesson*> &Course::getLessons()
{
    return lessons;
}

Course::~Course()
{

}