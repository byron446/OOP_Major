// course class
#include "Course.h"
#include "Lesson.h"
#include <string>
#include <iostream>


Course::Course(){

    name = "?";
    course_id = "??";
    

}

Course::Course(std::string pname){
    name = pname;
}

std::string Course::setName(std::string pname){

    name = pname;

}

std::string Course::getName(){

    return name;
}

std::string Course::setCourseID(std::string pid){

    course_id = pid;

}

std::string Course::getCourseId(){

    return course_id;
}





