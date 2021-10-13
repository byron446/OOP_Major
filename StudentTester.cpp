#include "TestPerson.h"
#include "TestStudent.h"
#include <string>
#include <iostream>
#include <vector>

int student_num = 15000;
int main()
{
    std::string name1,name2, course_name1, course_name2, course_id1, course_id2;
    int grade_a, grade_b, grade_c, grade_d;
    std::cin >> name1;
    std::cin >> name2;
    TestStudent *student = new(TestStudent);
    TestStudent *student2 = new(TestStudent);
    student->setIdNum(&student_num);
    student2->setIdNum(&student_num);
    std::cout << student->getIdNum() << " " << student2->getIdNum() << std::endl;

    student->setName(name1);
    student2->setName(name2);
    std::cout << student->getName() << " " << student2->getName() << std::endl;


    return 0;
}