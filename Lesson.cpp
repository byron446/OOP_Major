// Lesson class

#include "Lesson.h"
#include <string>
#include <iostream>

// default constructor
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

    duration[LessonType::Lecture] = 100;
    duration[LessonType::Tutorial] = 100;
    duration[LessonType::Workshop] = 200;
    duration[LessonType::Practical] = 300;
    lessonTime  = pltime;
    lessonDate = pdate;
    lesson = (LessonType)plesson;
    lessonDuration = duration[lesson];

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

// setting the time when a lesson takes place
void Lesson::setTime(int pltime){

    lessonTime = pltime;


}

// returning the time when a lesson takes place
int Lesson::getTime(){

    return lessonTime;
}

// setting the day of the week the lesson takes place on
void Lesson::setDate(int pdate){

    lessonDate = pdate;

}

// returning the day each lesson takes place on
int Lesson::getDate(){

    return lessonDate;

}

// Casts an integer lesson type to the enum to allow a set list of lessons.
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

// getting the length of the lesson
int Lesson::getDuration(){

    return lessonDuration;

}

// destructor
Lesson::~Lesson()
{
    
}


