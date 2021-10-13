// course class
#include "Course.h"
#include "Lesson.h"
#include <string>
#include <iostream>


Course::Course(){

    name = "?"
    course_id = 0;

    

}


std::string Course::getName(){

    return name;
}

std::string Course::getCourseId(){

    return course_id;
}

std::string Course::getTime(){

    return lessonTime;
}




