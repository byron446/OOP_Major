//This is the main file
#include "Course.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

extern int loginfunct(int login);

int main() {
    int login = 0, quit = 0;
    
    while (quit == 0) {
        quit = loginfunct(login);
    }
    return 0;
}