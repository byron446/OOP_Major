//This is the main file
#include "Course.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    int login = 0, idcheck = 0;
    string newname, role; //name and role for the new user
    Person Person1; // person type, data to be assigned to it once id is put in

// user interface for logging into the timetable program
// if the user doesnt select 1 or 2 for login or quit, make them select again
    while (login != 1 || login != 2 || login !=3) {
        cout << "Welcome to the University of Adelaide Timetable interface." << endl;
        cout << "Please select from one of the following options:" << endl;
        cout << "1. Login" << endl;
        cout << "2. New User" << endl;
        cout << "3. Quit" << endl;
        cin >> login;
        cout << endl;
        break;
    }

// if they choose to Login
    if (login == 1) {
        cout << "Please enter your identification number to proceed with the login process:" << endl;
        cout << "1. id: a";
        cin >> idcheck;
        cout << endl;

        // if they are a teacher
        if (idcheck <= 15000) {
            int teachchoice=0;
            while (teachchoice != 1 || teachchoice != 2 || teachchoice != 3) {
                cout << "Welcome " << Person1.getName() << endl;
                cout << "1. View Timetable" << endl;
                cout << "2. View Grades" << endl;
                cout << "3. Logout" << endl;
                cin >> teachchoice;

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
                cout << "Welcome " << Person1.getName() << endl;
                cout << "1. View Timetable" << endl;
                cout << "2. View Grade" << endl;
                cout << "3. Enrol" << endl;
                cout << "4. Remove" << endl;
                cout << "5. Logout" << endl;
                cin >> studchoice;

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
        cout << "Please enter your name: ";
        cin >> newname;
        while (role != "Teacher" || role != "Student") {
            cout << "Do you want to create a Teacher account or a Student account";
            cin >> role;
        }
        if (role == "Teacher") {

        } else if (role == "Student") {

        }
    }

// if they choose to Quit
    if (login == 3) {
        cout << "Shutting down session..." << endl;
    }

    return 0;
}