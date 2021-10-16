#include "Person.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <vector>


int main()
{
    int student_num = 15000;
    int* current_id = &student_num;
    std::string name1,name2, course_name1, course_name2, course_id1, course_id2;
    int grade_a, grade_b, grade_c, grade_d;
    std::cin >> name1;
    std::cin >> name2;
    std::cin >> course_name1;
    std::cin >> course_id1;
    std::cin >> course_name2;
    std::cin >> course_id2;
    std::cin >> grade_a;
    std::cin >> grade_b;
    std::cin >> grade_c;
    std::cin >> grade_d;

    Student *student1 = new Student;
    Student *student2 = new Student;

    Course *course1 = new Course(course_name1,course_id1);
    Course *course2 = new Course(course_name2,course_id2);

    student1->setIdNum(current_id);
    student2->setIdNum(current_id);
    std::cout << student1->getIdNum() << " " << student2->getIdNum() << std::endl;

    student1->setName(name1);
    student2->setName(name2);
    std::cout << student1->getName() << " " << student2->getName() << std::endl;

    student1->enrolStudent(*course1,grade_a);
    student1->enrolStudent(*course2,grade_b);
    student2->enrolStudent(*course2,grade_c);
    student2->enrolStudent(*course1,grade_d);
    student1->printCourses();
    student2->printCourses();
    student1->printGrades();
    student2->printGrades();
    student1->leaveCourseStudent(*course1);
    student2->leaveCourseStudent(*course1);
    student1->printGrades();
    student2->printGrades();
    return 0;
}