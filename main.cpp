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
    string name;

// user interface for logging into the timetable program
// if the user doesnt select 1 or 2 for login or quit, make them select again
    while (login != 1 || login != 2 || login !=3) {
        cout << "Welcome to the University of Adelaide Timetable interface." << endl;
        cout << "Please select from one of the following options:" << endl;
        cout << "1. Login" << endl;
        cout << "2. New User" << endl;
        cout << "3. Quit" << endl;
        cin >> login;
        break;
    }

// if they choose to Login
    if (login == 1) {
        cout << "Please enter your identification number to proceed with the login process:" << endl;
        cout << "1. id: a";
        cin >> idcheck;
        cout << endl;

        if (idcheck <= 15000) {
            int teachchoice=0;
            cout << "1. View Timetable" << endl;
            cout << "2. View Grades" << endl;
            cout << "3. Logout" << endl;
            cin >> teachchoice;
        }

        if (idcheck >= 15001) {
            int studchoice = 0;
            cout << "1. View Timetable" << endl;
            cout << "2. View Grade" << endl;
            cout << "3. Enrol" << endl;
            cout << "4. Remove" << endl;
            cout << "5. Logout" << endl;
            cin >> studchoice;

        }
    }

// if they are a new user
    if (login == 2) {
        cout << "Please enter your name: ";
        cin >> name;
    }

// if they choose to Quit
    if (login == 3) {
        cout << "Shutting down session..." << endl;
    }

    return 0;
}