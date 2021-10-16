//functions for the main file
//#include "Course.h"
//#include "Person.h"
//#include "Teacher.h"
//#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

// starter ID's created for teacher and student
int teacher_id = 10000;
int student_id = 15000;

//Course zero_course;
// teacher login function
int teachlogin() {
    //Teacher Teacher1; // teacher variable created
    std::string inputteachchoice = "?";
    int teachchoice = 0;
    
    // while loop preventing unavailbe options from being selected
    while (teachchoice !=1 && teachchoice !=2 && teachchoice != 3) {
        std::string cteachchoice = "0";
        std::cout << "Welcome " << "Teacher1.getName()" << std::endl; // giving options to teacher
        std::cout << "1. View Timetable" << std::endl;
        std::cout << "2. View Grades" << std::endl;
        std::cout << "3. Logout" << std::endl;
        std::cin >> inputteachchoice;
        if (inputteachchoice != "1" || inputteachchoice != "2" || inputteachchoice != "3") {
            cteachchoice.append(inputteachchoice);
        } else {
            cteachchoice = inputteachchoice;
        }
        teachchoice = std::stoi(cteachchoice);
        
        std::cout << std::endl;
        if (teachchoice == 1) {
            //Teacher1.printTimetable(); // function to print the teachers timetable
            teachchoice = 0; // resetting back to the beginning of the while loop
        } else if (teachchoice == 2) {
            //Teacher1.printGrades(); // calling to printGrades function
            teachchoice = 0; // resetting back to the begging of the while loop
        } else if (teachchoice == 3) {
            std::cout << "Logging out of session..." << std::endl;
            std::cout << std::endl;
            return teachchoice; // exiting teacher function if they logout
        }
        std::cout << std::endl;
    }

    return teachchoice;
}

// student login function 
int studlogin() {
    //Student Student1; // student variable created
    std::string inputstudchoice = "?";
    int studchoice = 0;

    // while loop to prevent unavailble choice from being selected
    while (studchoice != 1 || studchoice != 2 || studchoice != 3 || studchoice != 4 || studchoice != 5) {
        std::string cstudchoice = "0";
        std::cout << "Welcome " << "Student1.getName()" << std::endl; // giving options to the student
        std::cout << "1. View Timetable" << std::endl;
        std::cout << "2. View Grade" << std::endl;
        std::cout << "3. Enrol" << std::endl;
        std::cout << "4. Remove" << std::endl;
        std::cout << "5. Logout" << std::endl;
        std::cin >> inputstudchoice;
        if (inputstudchoice != "1" || inputstudchoice != "2" || inputstudchoice != "3" || inputstudchoice != "4" || inputstudchoice != "5") {
            cstudchoice.append(inputstudchoice);
        } else {
            cstudchoice = inputstudchoice;
        }
        studchoice = std::stoi(cstudchoice);
        std::cout << std::endl;

        if (studchoice == 1) {
            //Student1.printTimetable(); // function to print students timetable
            studchoice = 0;
        } else if (studchoice == 2) {
            //Student1.printGrades(); // calling to function to show the student their grades
            studchoice = 0;
        } else if (studchoice == 3) { // if the student wants to enrol in a course
            // listing all available courses
            std::string inputcname = "?";
            int cname = 0;
            while (cname != 1 && cname != 2 && cname != 3 && cname != 4 && cname != 5 && cname != 6 && cname != 7 && cname != 8 && cname != 9 && cname != 10) {
                std::string appendcname = "0";
                std::cout << "Which Course would you like to enrol: " << std::endl;
                std::cout << "1. Maths" << std::endl;
                std::cout << "2. Chemistry" << std::endl;
                std::cout << "3. Physics" << std::endl;
                std::cout << "4. Object Oriented Programming" << std::endl;
                std::cout << "5. Introduction To Engineering" << std::endl;
                std::cout << "6. Dynamics" << std::endl;
                std::cout << "7. Digital Electronics" << std::endl;
                std::cout << "8. Matlab and C" << std::endl;
                std::cout << "9. Introduction to Process Engineering" << std::endl;
                std::cout << "10. Analog Electronics" << std::endl;
                std::cin >> inputcname;
                if (inputcname != "1" || inputcname != "2" || inputcname != "3" || inputcname != "4" || inputcname != "5" || inputcname != "6" || inputcname != "7" || inputcname != "8" || inputcname != "9" || inputcname != "10") {
                    appendcname.append(inputcname);
                } else {
                    appendcname = inputcname;
                }
                cname = std::stoi(appendcname);
                // function to add the course to the student's enrollment
                //Student1.enrol(courseslist[cname-1]);
                studchoice = 0;
            }
        } else if (studchoice == 4) { // if the student wants to remove a course
            // listing all available courses
            std::string inputcname = "?";
            int cname = 0;
            while (cname != 1 && cname != 2 && cname != 3 && cname != 4 && cname != 5 && cname != 6 && cname != 7 && cname != 8 && cname != 9 && cname != 10) {
                std::string appendcname = "0";
                std::cout << "Which Course would you like to remove: " << std::endl;
                std::cout << "1. Maths" << std::endl;
                std::cout << "2. Chemistry" << std::endl;
                std::cout << "3. Physics" << std::endl;
                std::cout << "4. Object Oriented Programming" << std::endl;
                std::cout << "5. Introduction To Engineering" << std::endl;
                std::cout << "6. Dynamics" << std::endl;
                std::cout << "7. Digital Electronics" << std::endl;
                std::cout << "8. Matlab and C" << std::endl;
                std::cout << "9. Introduction to Process Engineering" << std::endl;
                std::cout << "10. Analog Electronics" << std::endl;
                std::cin >> inputcname;
                if (inputcname != "1" || inputcname != "2" || inputcname != "3" || inputcname != "4" || inputcname != "5" || inputcname != "6" || inputcname != "7" || inputcname != "8" || inputcname != "9" || inputcname != "10") {
                    appendcname.append(inputcname);
                } else {
                    appendcname = inputcname;
                }
                cname = std::stoi(appendcname);
                // function to add the course to the student's enrollment
                //Student1.enrol(courseslist[cname-1]);
                studchoice = 0;
            }
        } else if (studchoice == 5) {
            std::cout << "Logging out of session..." << std::endl;
            std::cout << std::endl;
            return studchoice; // exiting student function if they log out
        }
        std::cout << std::endl;
    }

    return studchoice;
}

// new user funciton
void newuser() {

    std::string inputrole = "?";
    int role = 0;

    // while loop to prevent unavailble options from being selected
    while (role != 1 && role != 2) {
        std::string crole = "0";
        // asking new user if they are a teacher or student
        std::cout << "What type of account would you like to create: " << std::endl;
        std::cout << "1. Teacher" << std::endl;
        std::cout << "2. Student" << std::endl;
        std::cin >> inputrole;
        if (inputrole != "1" || inputrole != "2") {
            crole.append(inputrole);
        } else {
            crole = inputrole;
        }
        role = std::stoi(crole);
        std::cout << std::endl;

        // if they are a teacher
        if (role == 1) {
            //Teacher Teacher1; // create a teacher variable 
            std::string tname;
            // ask for their name
            std::cout << "Please Enter your Name: ";
            std::cin >> tname;
            //Teacher1.setName(tname); // storing teacher name in the teacher type
            //Teacher1.setIdNum(&teacher_id); // creating an ID for the teacher
            // telling the teacher their ID number
            std::cout << std::endl;
            std::cout << "Your ID Number is : a" << "Teacher1.getIdNum()" << std::endl;
        
        // if they are a student
        } else if (role == 2) {
            //Student Student1; // create a student variable
            std::string tname;
            // ask for their name
            std::cout << "Please Enter your Name: ";
            std::cin >> tname;
            //Student1.setName(tname); // storing students name in the student type
            //Student1.setIdNum(&student_id); // creating an ID for the teacher
            // telling the student their ID number
            std::cout << std::endl;
            std::cout << "Your ID Number is : a" << "Student1.getIdNum()" << std::endl;
        }
        std::cout << std::endl;
    }
    return;
}

// login function
int loginfunct() {
    // creating a course pointer array for the different courses in the university
    //Course* courseslist = new Course[10];
    std::string login = "?";
    int input = 0;

    // setting the course names using setName function
    //courseslist[0].setName("Maths");
    //courseslist[1].setName("Chemistry");
    //courseslist[2].setName("Physics");
    //courseslist[3].setName("Objected Oriented Programming");
    //courseslist[4].setName("Introduction To Engineering");
    //courseslist[5].setName("Dynamics");
    //courseslist[6].setName("Digital Electronics");
    //courseslist[7].setName("Matlab and C");
    //courseslist[8].setName("Introduction to Process Engineering");
    //courseslist[9].setName("Analog Electronics");    

    // while loop to prevent unavailable options from being selected
    while (input != 1 && input != 2 && input != 3 ) {
        std::string clogin = "0";
        std::cout << "Welcome to the University of Adelaide Timetable interface." << std::endl;
        std::cout << "Please select from one of the following options:" << std::endl;
        std::cout << std::endl;
        std::cout << "1. Login" << std::endl;
        std::cout << "2. New User" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cin >> login;
        if (login != "1" || login != "2" || login != "3") {
            clogin.append(login);
        } else {
            clogin = login;
        }
        input = std::stoi(clogin);
        std::cout << std::endl;
    }

    // if login is selected
    if (input == 1) {
        int check = 0;
        int idcheck = 0;
        std::cout << "Please enter your identification number to proceed with the login process:" << std::endl;
        std::cout << "ID: a"; // asking user for their ID
        std::cin >> idcheck;
        std::cout << std::endl;

        // if their id is less than 15000, they are a teacher
        if (idcheck <= 15000) {
            check = teachlogin(); // calling to teacher login function
            if (check == 3) { // if they chose to logout
                input = 0; // go back to the main function and restart
                return input;
            }
        // if their id is more than 15000, they are a student
        } else if (idcheck > 15000) {
            check = studlogin(); // calling to student login function bringing the course array
            if (check == 3) { // if they chose to logout
                input = 0; // go back to the main function and restart
                return input;
            }
        }
    // if new user is selected
    } else if (input == 2) {
        newuser(); // calling to new user function
        input = 0; // reseting login variable so that original login page is brought back up
    // if quit is selected
    } else if (input == 3) {
        std::cout << "Shutting down session..." << std::endl; // shutting down visual
    }

    return input;
}

// This function takes the course list, member_var which indicates which member variable of 
// a course to screen , a value to search for, and the number of courses, and returns the 
// object from the course list
//Course MemtoCourse(Course* courseslist, std::string member_value, std::string member_var, int course_num)
//{
 //   if(member_var == "id"){
 //       for(int i = 0; i < course_num; i++){
 //           if(courseslist[i].getCourseId() == member_value){
 //               return courseslist[i];
//            }
//        }
//    }
//    if(member_var == "name"){
//        for(int i = 0; i < course_num; i++){
//            if(courseslist[i].getName() == member_value){
//                return courseslist[i];
//            }
//        }
//    }
//    return zero_course;
//}