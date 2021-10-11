//This is the main file
#include "Course.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <string>
#include <iostream>

int main() {
    int login = 0, idcheck = 0;
    std::string newname, role; //name and role for the new user
    Person Person1; // person type, data to be assigned to it once id is put in

// user interface for logging into the timetable program
// if the user doesnt select 1 or 2 for login or quit, make them select again
    while (login != 1 || login != 2 || login !=3) {
        std::cout << "Welcome to the University of Adelaide Timetable interface." << std::endl;
        std::cout << "Please select from one of the following options:" << std::endl;
        std::cout << "1. Login" << std::endl;
        std::cout << "2. New User" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cin >> login;
        std::cout << std::endl;
        break;
    }

// if they choose to Login
    if (login == 1) {
        std::cout << "Please enter your identification number to proceed with the login process:" << std::endl;
        std::cout << "1. id: a";
        std::cin >> idcheck;
        std::cout << std::endl;

        // if they are a teacher
        if (idcheck <= 15000) {
            int teachchoice=0;
            while (teachchoice != 1 || teachchoice != 2 || teachchoice != 3) {
                std::cout << "Welcome " << Person1.getName() << std::endl;
                std::cout << "1. View Timetable" << std::endl;
                std::cout << "2. View Grades" << std::endl;
                std::cout << "3. Logout" << std::endl;
                std::cin >> teachchoice;

                if (teachchoice == 1) {

                } else if (teachchoice == 2) {

                } else if (teachchoice == 3) {
                    break;
                }
            }
        }

        // if they are a student
        if (idcheck >= 15001) {
            int studchoice = 0;
            while (studchoice != 1 || studchoice != 2 || studchoice != 3 || studchoice != 4 || studchoice != 5) {
                std::cout << "Welcome " << Person1.getName() << std::endl;
                std::cout << "1. View Timetable" << std::endl;
                std::cout << "2. View Grade" << std::endl;
                std::cout << "3. Enrol" << std::endl;
                std::cout << "4. Remove" << std::endl;
                std::cout << "5. Logout" << std::endl;
                std::cin >> studchoice;

                if (studchoice == 1) {
                    
                } else if (studchoice == 2) {
                    
                } else if (studchoice == 3) {

                } else if (studchoice == 4) {

                } else if (studchoice == 5) {
                    break;
                }
            }
        }
    }

// if they are a new user
    if (login == 2) {
        std::cout << "Please enter your name: ";
        std::cin >> newname;
        while (role != "Teacher" || role != "Student") {
            std::cout << "Do you want to create a Teacher account or a Student account";
            std::cin >> role;
        }
        if (role == "Teacher") {

        } else if (role == "Student") {

        }
    }

// if they choose to Quit
    if (login == 3) {
        std::cout << "Shutting down session..." << std::endl;
    }

    return 0;
}