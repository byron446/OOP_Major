//This is the main file
#include "Course.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    int login;

// login interface
    cout << "Welcome to the University of Adelaide Timetable interface." << endl;
    cout << "Please select from one of the following options:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Quit" << endl;
    cin >> login;

// if the user doesnt select 1 or 2 for login or quit, make them select again
    while (login != 1 || login != 2) {
        cout << "Welcome to the University of Adelaide Timetable interface." << endl;
        cout << "Please select from one of the following options:" << endl;
        cout << "1. Login" << endl;
        cout << "2. Quit" << endl;
        cin >> login;
    }

// if they choose to Login
    if (login == 1) {
        cout << "Please enter your identification number to proceed with the login process:" << endl;
        cout << "1. id:" << endl;
    }

// if they choose to Quit
    if (login == 2) {
        cout << "Shutting down session..." << endl;
    }

    return 0;
}