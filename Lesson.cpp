// Lesson class

#include "Lesson.h"
#include <string>
#include <iostream>

Lesson::Lesson(){

    duration[LessonType::Lecture] = 100;
    duration[LessonType::Tutorial] = 100;
    duration[LessonType::Workshop] = 200;
    duration[LessonType::Practical] = 300;

    lessonTime = 0;
    lessonDate = "?";
    lessonDuration = 0;

}

Lesson::Lesson(int pltime, int pduration, int plesson, std::string pdate){

    lessonTime  = pltime;
    lessonDate = pdate;
    lessonDuration = pduration;
    lesson = (LessonType)plesson;

}


void Lesson::setTime(int pltime){

    lessonTime = pltime;


}

int Lesson::getTime(){

    return lessonTime;
}

void Lesson::setDate(std::string pdate){

    lessonDate = pdate;

}

std::string Lesson::getDate(){

    return lessonDate;

}
void Lesson::setLesson(int plesson)
{
    lesson = (LessonType)plesson;
}

enum Lesson::LessonType Lesson::getLesson(){
    return lesson;

}


void Lesson::setDuration(int pduration){

    lessonDuration = pduration;

}

int Lesson::getDuration(){

    return lessonDuration;

}

Lesson::~Lesson()
{
    
}


