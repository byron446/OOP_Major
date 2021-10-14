#include "TestPerson.h"
#include "TestStudent.h"
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

    TestStudent *student = new(TestStudent);
    TestStudent *student2 = new(TestStudent);
    student->setIdNum(current_id);
    student2->setIdNum(current_id);
    std::cout << student->getIdNum() << " " << student2->getIdNum() << std::endl;

    student->setName(name1);
    student2->setName(name2);
    std::cout << student->getName() << " " << student2->getName() << std::endl;

    student->enrolStudent(course_name1,course_id1,grade_a);
    student->enrolStudent(course_name2,course_id2,grade_b);
    student2->enrolStudent(course_name2,course_id2,grade_c);
    student2->enrolStudent(course_name1,course_id1,grade_d);
    student->printCourses();
    student2->printCourses();
    student->printGrades();
    student2->printGrades();
    student->leaveCourseStudent(course_name1);
    student2->leaveCourseStudent(course_name1);
    student->printGrades();
    student2->printGrades();
    return 0;
}