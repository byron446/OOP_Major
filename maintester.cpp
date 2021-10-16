//This is the main file
//#include "Course.h"
//#include "Person.h"
//#include "Teacher.h"
//#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

// login function
extern int loginfunct();

// main function
int main() {
    int quit = 0; // variable to loop code unless programme is quit

    while (quit == 0) { // while loop to take user back to login page once finished
        quit = loginfunct(); // calling to login function
    }

    return 0;
}