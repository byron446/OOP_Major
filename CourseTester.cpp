#include "Lesson.h"
#include "Course.h"

#include <string>
#include <iostream>
#include <vector>

int main(){

    std::string courseName1, courseName2, courseId1, courseId2;

    std::cin >> courseName1;
    std::cin >> courseName2;
    std::cin >> courseId1;
    std::cin >> courseId2;

    Course *course1 = new Course(courseName1,courseId1);
    Course *course2 = new Course(courseName2,courseId2);


    course1->setName(courseName1);
    course1->setCourseID(courseId1);
    course2->setName(courseName2);
    course2->setCourseID(courseId2);

    return 0;
    
}