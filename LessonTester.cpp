#include "Lesson.h"
#include "Course.h"

#include <string>
#include <iostream>
#include <vector>

int main(){

    int lessonTime1, lessonTime2, lessonDuration1, lessonDuration2;

    std::string lessonDate1, lessonDate2, lessonType1, lessonType2;

    std::cin >> lessonTime1;
    std::cin >> lessonTime2;
    std::cin >> lessonDate1;
    std::cin >> lessonDate2;
    std::cin >> lessonType1;
    std::cin >> lessonType2;
    std::cin >> lessonDuration1;
    std::cin >> lessonDuration2;

    Lesson *lesson1 = new Lesson(lessonTime1, lessonDate1, lessonType1, lessonDuration1);
    Lesson *lesson2 = new Lesson(lessonTime2, lessonDate2, lessonType2, lessonDuration2);

    lesson1->setTime(lessonTime1);
    lesson2->setTime(lessonTime2);

    lesson1->setDate(lessonDate1);
    lesson2->setDate(lessonDate2);

    lesson1->setLesson(lessonType1);
    lesson2->setLesson(lessonType2);

    lesson1->setDuration(lessonDuration1);
    lesson2->setDuration(lessonDuration2);


    return 0



}