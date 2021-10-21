#include "Lesson.h"
#include "Course.h"

#include <string>
#include <iostream>
#include <vector>


int main(){

    int lessonTime1, lessonTime2, lessonDuration1, lessonDuration2;

    int lessonType1, lessonType2;

    int lessonDate1, lessonDate2;

    std::cin >> lessonTime1;
    std::cin >> lessonTime2;
    std::cin >> lessonDate1;
    std::cin >> lessonDate2;
    std::cin >> lessonType1;
    std::cin >> lessonType2;
    std::cin >> lessonDuration1;
    std::cin >> lessonDuration2;

    Lesson *lesson1 = new Lesson(lessonTime1, lessonType1, lessonDate1);
    Lesson *lesson2 = new Lesson(lessonTime2, lessonType2, lessonDate2);
    // Lesson *lesson1 = new Lesson(lessonTime1, lessonDate1, lessonType1);
    // Lesson *lesson2 = new Lesson(lessonTime2, lessonDate2, lessonType2);

    lesson1->setTime(lessonTime1);
    lesson2->setTime(lessonTime2);

    lesson1->setDate(lessonDate1);
    lesson2->setDate(lessonDate2);

    lesson1->setLesson(lessonType1);
    lesson2->setLesson(lessonType2);


    return 0;



}