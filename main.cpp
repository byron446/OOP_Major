//This is the main file
//#include "Course.h"
//#include "Person.h"
//#include "Teacher.h"
//#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

extern int loginfunct(int login);

int teacher_id = 10000;
int student_id = 15000;

int main() {
    int login = 0, quit = 0;
    
    while (quit == 0) {
        quit = loginfunct(login);
    }
    return 0;
}