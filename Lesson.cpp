// Lesson class

#include "Lesson.h"
#include <string>
#include <iostream>

Lesson::Lesson(){

    lessonTime = 0;
    lessonDate = "?";
    lessonDuration = 0;

}


int Lesson::setTime(int pltime){

    lessonTime = pltime;


}

int Lesson::getTime(){

    return lessonTime;
}

std::string Lesson::setDate(std::string pdate){

    lessonDate = pdate;

}

std::string Lesson::getDate(){

    return lessonDate;

}
void Lesson::setLesson(LessonType plesson)
{
    lesson = plesson;
}

LessonType Lesson::getLesson(){

    return cLesson;
}


int Lesson::setDuration(int pduration){

    lessonDuration = pduration;

}

int Lesson::getDuration(){

    return lessonDuration;

}



