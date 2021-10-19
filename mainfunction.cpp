//functions for the main file
#include "Course.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include "Lesson.h"
#include <string>
#include <sstream>
#include <iostream>
#include <math.h>
#include <vector>

// starter ID's created for teacher and student
int teacher_id = 10000;
int student_id = 15000;

Course zero_course;
// teacher login function
int teachlogin() {
    Teacher Teacher1; // teacher variable created
    std::string inputteachchoice = "?";
    int teachchoice = 0;
    
    // while loop preventing unavailbe options from being selected
    while (teachchoice != 3) {
        std::string cteachchoice = "0";
        std::cout << "Welcome " << Teacher1.getName() << std::endl; // giving options to teacher
        std::cout << "1. View Timetable" << std::endl;
        std::cout << "2. View Grades" << std::endl;
        std::cout << "3. Logout" << std::endl;
        getline(std::cin, inputteachchoice); // so it can take a space as input
        cteachchoice.append(inputteachchoice);
        teachchoice = std::stoi(cteachchoice);
        
        if (teachchoice == 1 || teachchoice == 2 || teachchoice == 3) {
            std::cout << std::endl;
        }

        if (teachchoice == 1) {
            std::cout << "Printing Timetable..." << std::endl;
            Teacher1.printTimetable(); // function to print the teachers timetable
        } else if (teachchoice == 2) {
            std::cout << "Printing Grades..." << std::endl;
            Teacher1.printGrades(); // calling to printGrades function
        } else if (teachchoice == 3) {
            std::cout << "Logging out of session..." << std::endl;
        }
        std::cout << std::endl;
    }

    return teachchoice;
}

// student login function 
int studlogin(Course* courseslist) {
    Student Student1; // student variable created
    std::string inputstudchoice = "?";
    int studchoice = 0;

    // while loop to prevent unavailble choice from being selected
    while (studchoice != 5) {
        std::string cstudchoice = "0";
        std::cout << "Welcome " << Student1.getName() << std::endl; // giving options to the student
        std::cout << "1. View Timetable" << std::endl;
        std::cout << "2. View Grade" << std::endl;
        std::cout << "3. Enrol" << std::endl;
        std::cout << "4. Remove" << std::endl;
        std::cout << "5. Logout" << std::endl;
        getline(std::cin, inputstudchoice);
        cstudchoice.append(inputstudchoice);
        studchoice = std::stoi(cstudchoice);

        if (studchoice == 1 || studchoice == 2 || studchoice == 3 || studchoice == 4 || studchoice == 5) {
            std::cout << std::endl;
        }

        if (studchoice == 1) {
            Student1.printTimetable(); // function to print students timetable
        } else if (studchoice == 2) {
            Student1.printGrades(); // calling to function to show the student their grades
        } else if (studchoice == 3) { // if the student wants to enrol in a course
            // listing all available courses
            std::string inputcname = "?";
            int cname = 0;
            while (cname != 1 && cname != 2 && cname != 3 && cname != 4 && cname != 5 && cname != 6 && cname != 7 && cname != 8 && cname != 9 && cname != 10) {
                std::string appendcname = "0";
                std::cout << "Which Course would you like to enrol: " << std::endl;
                std::cout << "1. Maths" << std::endl;
                //std::cout << i. << courseslist[1].getName();
                std::cout << "2. Chemistry" << std::endl;
                std::cout << "3. Physics" << std::endl;
                std::cout << "4. Object Oriented Programming" << std::endl;
                std::cout << "5. Introduction To Engineering" << std::endl;
                std::cout << "6. Dynamics" << std::endl;
                std::cout << "7. Digital Electronics" << std::endl;
                std::cout << "8. Matlab and C" << std::endl;
                std::cout << "9. Introduction to Process Engineering" << std::endl;
                std::cout << "10. Analog Electronics" << std::endl;
                getline(std::cin, inputcname);
                appendcname.append(inputcname);
                cname = std::stoi(appendcname);
            }
            // function to add the course to the student's enrollment
            Student1.enrol(&courseslist[cname-1], 100);
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
                getline(std::cin, inputcname);
                appendcname.append(inputcname);
                cname = std::stoi(appendcname);
            }
            // function to add the course to the student's enrollment
            Student1.leaveCourse(&courseslist[cname-1]);
        } else if (studchoice == 5) {
            std::cout << "Logging out of session..." << std::endl;
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
        getline(std::cin, inputrole);
        crole.append(inputrole);
        role = std::stoi(crole);
        std::cout << std::endl;

        // if they are a teacher
        if (role == 1) {
            Teacher Teacher1; // create a teacher variable 
            std::string tname;
            // ask for their name
            std::cout << "Please Enter your Name: ";
            getline(std::cin, tname);
            Teacher1.setName(tname); // storing teacher name in the teacher type
            Teacher1.setIdNum(&teacher_id); // creating an ID for the teacher
            // telling the teacher their ID number
            std::cout << std::endl;
            std::cout << "Your ID Number is : a" << Teacher1.getIdNum() << std::endl;
        
        // if they are a student
        } else if (role == 2) {
            Student Student1; // create a student variable
            std::string tname;
            // ask for their name
            std::cout << "Please Enter your Name: ";
            getline(std::cin, tname);
            Student1.setName(tname); // storing students name in the student type
            Student1.setIdNum(&student_id); // creating an ID for the teacher
            // telling the student their ID number
            std::cout << std::endl;
            std::cout << "Your ID Number is : a" << Student1.getIdNum() << std::endl;
        }
        std::cout << std::endl;
    }
    return;
}

// function to check if id is valid
bool idvalid(std::string sidcheck) {
    // integer for the length of the string
    int idlength = sidcheck.length();

    // converting string to character array
    char cidcheck[idlength];
    strcpy(cidcheck, sidcheck.c_str());

    // if id doesnt start with 'a'
    if (cidcheck[0] != 'a') {
        std::cout << "Please Ensure you enter 'a' before your code" << std::endl;
        return false;
    }

    // if the id isn't the correct length
    if (idlength != 6) {
        std::cout << "Please Ensure the code you enter is 5 numbers long" << std::endl;
        return false;
    }

    // if there are other non integer values in the id not including the a at the beginning
    for (int i=1; i<6; i++) {
        if (cidcheck[i]<48 || cidcheck[i]>57) { //48 is ascii for 0, 57 is ascii for 9
            std::cout << "Pleas Ensure the code you enter only contains numbers" << std::endl;
            return false;
        }
    }

    return true;
}

// converting their id from string to integer
int stringtoint (std::string sidcheck) {
    // int to assign the id to
    int idcheck = 0;

    // converting to character array
    int idlength = sidcheck.length();
    char cidcheck[idlength];
    strcpy(cidcheck, sidcheck.c_str());

    // adding the values multiplied by 10 to the power of the index to create one number
    for (int i=1; i<idlength; i++) {
        idcheck = idcheck + (cidcheck[i]-48) * (pow(10,(idlength-(i+1)))); // take away 48 because of ascii values
    }

    return idcheck;
}

// login function
bool loginfunct() {
    // creating a course pointer array for the different courses in the university
    Course* courseslist = new Course[10];
    std::string login = "?";
    int input = 0;

    // setting the course names using setName function
    courseslist[0].setName("Maths");
    courseslist[1].setName("Chemistry");
    courseslist[2].setName("Physics");
    courseslist[3].setName("Objected Oriented Programming");
    courseslist[4].setName("Introduction To Engineering");
    courseslist[5].setName("Dynamics");
    courseslist[6].setName("Digital Electronics");
    courseslist[7].setName("Matlab and C");
    courseslist[8].setName("Introduction to Process Engineering");
    courseslist[9].setName("Analog Electronics");    

    // while loop to prevent unavailable options from being selected
    while (input != 1 && input != 2 && input != 3 ) {
        std::string clogin = "0";
        std::cout << "Welcome to the University of Adelaide Timetable interface." << std::endl;
        std::cout << "Please select from one of the following options:" << std::endl << std::endl;
        std::cout << "1. Login" << std::endl;
        std::cout << "2. New User" << std::endl;
        std::cout << "3. Quit" << std::endl;
        getline(std::cin, login);
        clogin.append(login);
        input = std::stoi(clogin);
        std::cout << std::endl;
    }

    // if login is selected
    if (input == 1) {
        int logout = 0; // int to check if user logs out
        int validation = 0; // int to check if id is a valid id
        int idcheck = 0; // int to contain the id the user inputs
        std::string sidcheck = "?"; // string to read the user input

        while (validation == 0) {
            std::cout << "Please enter your identification number to proceed with the login process (aXXXXX): " << std::endl;
            std::cout << "ID: "; // asking user for their ID
            getline(std::cin, sidcheck);
            // calling to function checking if the id is valid
            validation = idvalid(sidcheck);
            std::cout << std::endl;
        }

        // calling to function to convert the string id to an integer
        idcheck = stringtoint(sidcheck);

        // if their id is less than 15000, they are a teacher
        if (idcheck <= 15000) {
            logout = teachlogin(); // calling to teacher login function
            if (logout == 3) { // if they chose to logout
                return false; // go back to the main function and restart
            }
        // if their id is more than 15000, they are a student
        } else if (idcheck > 15000) {
            logout = studlogin(courseslist); // calling to student login function bringing the course array
            if (logout == 5) { // if they chose to logout
                return false; // go back to the main function and restart
            }
        }
    // if new user is selected
    } else if (input == 2) {
        newuser(); // calling to new user function
        return false;
    // if quit is selected
    } else if (input == 3) {
        std::cout << "Shutting down session..." << std::endl; // shutting down visual
        return true;
    }

    return false;
}

// This function takes the course list, member_var which indicates which member variable of 
// a course to screen , a value to search for, and the number of courses, and returns the 
// object from the course list
Course MemtoCourse(Course* courseslist, std::string member_value, std::string member_var, int course_num)
{
   if(member_var == "id"){
       for(int i = 0; i < course_num; i++){
           if(courseslist[i].getCourseId() == member_value){
               return courseslist[i];
           }
       }
   }
   if(member_var == "name"){
       for(int i = 0; i < course_num; i++){
           if(courseslist[i].getName() == member_value){
               return courseslist[i];
           }
       }
   }
   return zero_course;
}