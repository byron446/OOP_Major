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
    lessonDate = 0;
    lessonDuration = 0;

}

Lesson::Lesson(int pltime, int plesson, int pdate){

    lessonTime  = pltime;
    lessonDate = pdate;
    lesson = (LessonType)plesson;

}

// Lesson::Lesson(int ptime, int pdate, int type)
// {
//     duration[LessonType::Lecture] = 100;
//     duration[LessonType::Tutorial] = 100;
//     duration[LessonType::Workshop] = 200;
//     duration[LessonType::Practical] = 300;
//     lessonTime = ptime;
//     lessonDate = pdate;
//     lesson = (LessonType)type; 
//     lessonDuration = duration[lesson];   
// }

void Lesson::setTime(int pltime){

    lessonTime = pltime;


}

int Lesson::getTime(){

    return lessonTime;
}

void Lesson::setDate(int pdate){

    lessonDate = pdate;

}

int Lesson::getDate(){

    return lessonDate;

}
void Lesson::setLesson(int plesson)
{
    lesson = (LessonType)plesson;
    lessonDuration = duration[lesson];
}

enum Lesson::LessonType Lesson::getLesson(){
    return lesson;
}


// void Lesson::setDuration(int pduration){

//     lessonDuration = pduration;

// }

int Lesson::getDuration(){

    return lessonDuration;

}

Lesson::~Lesson()
{
    
}


