#include "TestPerson.h"
#include "TestStudent.h"
#include <string>
#include <iostream>
#include <vector>

int student_num = 15000;
int main()
{
    TestStudent *student = new(TestStudent);
    TestStudent *student2 = new(TestStudent);
    student->setIdNum(&student_num);
    student2->setIdNum(&student_num);
    std::cout << student->getIdNum() << " " << student2->getIdNum() << std::endl;

    return 0;
}