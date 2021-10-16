// Test of the Lesson class

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

enum Lesson::LessonType Lesson::getLesson(){
    return lesson;

}


int Lesson::setDuration(int pduration){

    lessonDuration = pduration;

}

int Lesson::getDuration(){

    return lessonDuration;

}



