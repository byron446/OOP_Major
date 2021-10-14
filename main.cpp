//This is the main file
//#include "Course.h"
//#include "Person.h"
//#include "Teacher.h"
//#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

int teacher_id = 10000;
int student_id = 15000;

int main() {
    int login = 0, idcheck = 0;
    std::string newname; //name and role for the new user

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
        std::cout << "ID: a";
        std::cin >> idcheck;
        std::cout << std::endl;

        // if they are a teacher
        if (idcheck <= 15000) {
            //Teacher Teacher1; // defining teacher type
            int teachchoice = 0;
            while (teachchoice != 1 || teachchoice != 2 || teachchoice != 3) {
                //std::cout << "Welcome " << Teacher1.getName() << std::endl; // giving options to the teacher
                std::cout << "1. View Timetable" << std::endl;
                std::cout << "2. View Grades" << std::endl;
                std::cout << "3. Logout" << std::endl;
                std::cin >> teachchoice;

                if (teachchoice == 1) {
                    //Teacher1.getTimetable(); // calling function to get timetable
                } else if (teachchoice == 2) {
                    //Teacher1.getGrades(); // calling function to get students grades
                } else if (teachchoice == 3) {
                    std::cout << "Logging out..." << std::endl; // logging out sequence
                    break;
                }
            }
        }

        // if they are a student
        if (idcheck > 15000) {
            int studchoice = 0;
            //Student Student1; // defining student type
            while (studchoice != 1 || studchoice != 2 || studchoice != 3 || studchoice != 4 || studchoice != 5) {
                //std::cout << "Welcome " << Student1.getName() << std::endl; // giving options to the student
                std::cout << "1. View Timetable" << std::endl;
                std::cout << "2. View Grade" << std::endl;
                std::cout << "3. Enrol" << std::endl;
                std::cout << "4. Remove" << std::endl;
                std::cout << "5. Logout" << std::endl;
                std::cin >> studchoice;

                if (studchoice == 1) {
                    //Student1.getTimetable(); //calling function to get timetable
                } else if (studchoice == 2) {
                    //Student1.printGrades(); // calling function to get student's graes
                } else if (studchoice == 3) {
                    int cname;
                    std::cout << "Which Course would you like to enrol: " << std::endl;
                    std::cout << "1. Maths" << std::endl;
                    std::cout << "2. Chemistry" << std::endl;
                    std::cout << "3. Physhics" << std::endl;
                    std::cout << "4. OOP" << std::endl;
                    std::cout << "5. Introduction To Engineering" << std::endl;
                    std::cout << "6. Dynamics" << std::endl;
                    std::cout << "7. Digital Electronics" << std::endl;
                    std::cout << "8. Matlab and C" << std::endl;
                    std::cout << "9. Introduction to Process Engineering" << std::endl;
                    std::cout << "10. Analog Electrionics" << std::endl;
                    std::cin >> cname;
                } else if (studchoice == 4) {
                    std::cout << "Which Course would you like to Remove: " << std::endl;
                } else if (studchoice == 5) {
                    std::cout << "Logging out..." << std::endl; // logging out sequence
                    break;
                }
            }
        }
    }

// if they are a new user
    if (login == 2) {
        int role = 0;
        while (role != 1 || role != 2) {
            std::cout << "What type of account would you like to create: " << std::endl;
            std::cout << "1. Teacher" << std::endl;
            std::cout << "2. Student" << std::endl;
            std::cin >> role;
            if (role == 1) {
                //Teacher Teacher1;
                std::string tname;
                std::cout << "Please Enter your Name: ";
                std::cin >> tname;
                //Teacher1.setName(tname); // storing teacher name in the teacher type
                //Teacher1.setIdNum(&teacher_id);
                //std::cout << "Your ID Number is : a" << Teacher1.getIdNum() << std::endl;
                break;
            } else if (role == 2) {
                //Student Student1;
                std::string tname;
                std::cout << "Please Enter your Name: ";
                std::cin >> tname;
                //Student1.setName(tname); // storing students name in the student type
                //Student1.setIdNum(&student_id);
                //std::cout << "Your ID Number is : a" << Student1.getIdNum() << std::endl;
                break;
            }
        }
    }

// if they choose to Quit
    if (login == 3) {
        std::cout << "Shutting down session..." << std::endl;
    }

    return 0;
}