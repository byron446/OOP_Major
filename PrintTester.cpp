#include "Lesson.h"
#include "Course.h"
#include  "Student.h"

#include <string>
#include <iostream>
#include <vector>

int main(){

    int lessonTime1, lessonTime2, lessonDuration1, lessonDuration2;

    int lessonType1, lessonType2;
    // std::string lessonDate1, lessonDate2;

    int lessonDate1, lessonDate2;
    // int lessonType1, lessonType2;

    std::cin >> lessonTime1;
    std::cin >> lessonTime2;
    std::cin >> lessonDate1;
    std::cin >> lessonDate2;
    std::cin >> lessonType1;
    std::cin >> lessonType2;
    std::cin >> lessonDuration1;
    std::cin >> lessonDuration2;

    Lesson *lesson1 = new Lesson(lessonTime1, lessonType1, lessonDuration1, lessonDate1);
    Lesson *lesson2 = new Lesson(lessonTime2, lessonType2, lessonDuration2, lessonDate2);
    // Lesson *lesson1 = new Lesson(lessonTime1, lessonDate1, lessonType1);
    // Lesson *lesson2 = new Lesson(lessonTime2, lessonDate2, lessonType2);

    lesson1->setTime(lessonTime1);
    lesson2->setTime(lessonTime2);

    lesson1->setDate(lessonDate1);
    lesson2->setDate(lessonDate2);

    lesson1->setLesson(lessonType1);
    lesson2->setLesson(lessonType2);

    lesson1->setDuration(lessonDuration1);
    lesson2->setDuration(lessonDuration2);
    //std::cout << "1" << std::endl;
    std::string courseName1, courseName2, courseId1, courseId2;

    std::cin >> courseName1;
    std::cin >> courseName2;
    std::cin >> courseId1;
    std::cin >> courseId2;
    // std::cout << "2" << std::endl;
    Course *course1 = new Course(courseName1,courseId1);
    Course *course2 = new Course(courseName2,courseId2);

    course1->setName(courseName1);
    course1->setCourseID(courseId1);
    course2->setName(courseName2);
    course2->setCourseID(courseId2);
    course1->addLesson(lesson1);
    course2->addLesson(lesson2);

    Student student1;
    student1.enrol(course1,0);
    student1.enrol(course2,0);

    student1.printTimetable();
    return 0;
    



}