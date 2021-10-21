//This is the main file
#include "Course.h"
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include "Lesson.h"
#include <string>
#include <sstream>
#include <cmath>
#include <iostream>
#include <vector>

// starter ID's created for teacher and student
int teacher_id = 10000;
int student_id = 15000;
std::vector <Student*> Students;
std::vector <Teacher*> Teachers;
Course* courseslist;
Course zero_course;
int tindex = 0;
int maxtindex = 3;
int sindex = 0;
int maxsindex = 3;

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

// teacher login function
int teachlogin(int tindex) {
    std::string inputteachchoice = "?";
    int teachchoice = 0;
    
    // while loop preventing unavailbe options from being selected
    while (teachchoice != 3) {
        std::string cteachchoice = "0";
        std::cout << "Welcome " << Teachers[tindex]->getName() << std::endl; // giving options to teacher
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
            Teachers[tindex]->printTimetable(); // function to print the teachers timetable
            Teachers[tindex]->exportTimetable();
            std::cout << "Your Timetable has been exported to a CSV file..." << std::endl;
        } else if (teachchoice == 2) {
            std::cout << "Printing Grades..." << std::endl;
            Teachers[tindex]->printGrades(); // calling to printGrades function
        } else if (teachchoice == 3) {
            std::cout << "Logging out of session..." << std::endl;
        }
        std::cout << std::endl;
    }

    return teachchoice;
}

// student login function 
int studlogin(Course* courseslist, int sindex) {
    std::string inputstudchoice = "?";
    int studchoice = 0;

    // while loop to prevent unavailble choice from being selected
    while (studchoice != 5) {
        std::string cstudchoice = "0";
        std::cout << "Welcome " << Students[sindex]->getName() << std::endl; // giving options to the student
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
            std::cout << "Printing Timetable..." << std::endl;
            Students[sindex]->printTimetable(); // function to print students timetable
            Students[sindex]->exportTimetable();
            std::cout << "Your Timetable has been exported to a CSV file..." << std::endl;
        } else if (studchoice == 2) {
            std::cout << "Printing Grades..." << std::endl;
            Students[sindex]->printGrades(); // calling to function to show the student their grades
            Students[sindex]->exportGrades();
            std::cout << "Your Grades have been exported to a CSV file..." << std::endl;
        } else if (studchoice == 3) { // if the student wants to enrol in a course
            // listing all available courses
            std::string inputcname = "?";
            int cname = 0;
            while (cname < 1 || cname > 5) {
                std::string appendcname = "0";
                std::cout << "Which Course would you like to enrol in: " << std::endl;
                for (int i=0; i<5; i++) {
                    std::cout << i+1 << ". " << courseslist[i].getCourseId() << " " << courseslist[i].getName() << std::endl;
                }
                std::cout << "11. Exit" << std::endl;
                getline(std::cin, inputcname);
                appendcname.append(inputcname);
                cname = std::stoi(appendcname);

                //asking if the course they selected was correct
                if (cname >=1 && cname <=10) {
                    std::string inputconfirm = "?";
                    int confirm = 0;
                    while (confirm != 1 && confirm != 2) {
                        std::string appendconfirm = "0";
                        std::cout << std::endl << "You have chosen to enrol in: " << courseslist[cname-1].getCourseId() << " " << courseslist[cname-1].getName() << std::endl;
                        std::cout << "Is this Correct?" << std::endl;
                        std::cout << "1. Yes" << std::endl << "2. No" << std::endl;
                        getline(std::cin, inputconfirm);
                        appendconfirm.append(inputconfirm);
                        confirm = std::stoi(appendconfirm);
                    }
                    if (confirm == 2) { // if not, return to beginning of while loop
                        cname = 0;
                        std::cout << std::endl;
                    }
                } else if (cname != 11) {
                    std::cout << std::endl;
                }
            }
            // function to add the course to the student's enrollment
            Students[sindex]->enrol(&courseslist[cname-1], 100);
        } else if (studchoice == 4) { // if the student wants to remove a course
            // listing all available courses
            std::string inputcname = "?";
            int cname = 0;
            while (cname < 1 || cname > 11) {
                std::string appendcname = "0";
                std::cout << "Which Course would you like to remove: " << std::endl;
                for (int i=0; i<5; i++) {
                    std::cout << i+1 << ". " << courseslist[i].getCourseId() << " " << courseslist[i].getName() << std::endl;
                }
                std::cout << "11. Exit" << std::endl;
                getline(std::cin, inputcname);
                appendcname.append(inputcname);
                cname = std::stoi(appendcname);

                // asking if the course they selected was correct
                if (cname >=1 && cname <=10) {
                    std::string inputconfirm = "?";
                    int confirm = 0;
                    while (confirm != 1 && confirm != 2) {
                        std::string appendconfirm = "0";
                        std::cout << std::endl << "You have chosen to remove: " << courseslist[cname-1].getCourseId() << " " << courseslist[cname-1].getName() << std::endl;
                        std::cout << "Is this Correct?" << std::endl;
                        std::cout << "1. Yes" << std::endl << "2. No" << std::endl;
                        getline(std::cin, inputconfirm);
                        appendconfirm.append(inputconfirm);
                        confirm = std::stoi(appendconfirm);
                    }
                    if (confirm == 2) { // if not, return to beginning of while loop
                        cname = 0;
                        std::cout << std::endl;
                    }
                } else if (cname != 11) {
                    std::cout << std::endl;
                }
            }
            // function to add the course to the student's enrollment
            Students[sindex]->leaveCourse(&courseslist[cname-1]);
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

        std::string tname;
        // ask for their name
        std::cout << "Please Enter your Name: ";
        getline(std::cin, tname);

        // if they are a teacher
        if (role == 1) {
            Teacher tteacher;
            tteacher.setName(tname); // storing teacher name in the teacher type
            tteacher.setIdNum(&teacher_id); // creating an ID for the teacher
            // telling the teacher their ID number
            std::cout << std::endl;
            std::cout << "Your ID Number is : a" << tteacher.getIdNum() << std::endl;
            Teachers.push_back(&tteacher);
            maxtindex++;
        // if they are a student
        } else if (role == 2) {
            Student tstudent;
            tstudent.setName(tname); // storing students name in the student type
            tstudent.setIdNum(&student_id); // creating an ID for the teacher
            // telling the student their ID number
            std::cout << std::endl;
            std::cout << "Your ID Number is : a" << tstudent.getIdNum() << std::endl;
            Students.push_back(&tstudent);
            maxsindex++;
        }
        std::cout << std::endl;
    }
    return;
}

// function to check if id is valid
bool idvalid(std::string sidcheck) {
    // integer for the length of the string
    int idlength = sidcheck.length();

    // if id doesnt start with 'a'
    if (sidcheck[0] != 'a') {
        return false;
    }

    // if the id isn't the correct length
    if (idlength != 6) {
        return false;
    }

    // if there are other non integer values in the id not including the a at the beginning
    for (int i=1; i<6; i++) {
        if (sidcheck[i]<48 || sidcheck[i]>57) { //48 is ascii for 0, 57 is ascii for 9
            return false;
        }
    }

    return true;
}

// converting their id from string to integer
int stringtoint (std::string sidcheck) {
    // int to assign the id to
    int idcheck = 0;
    int idlength = sidcheck.length();

    // adding the values multiplied by 10 to the power of the index to create one number
    for (int i=1; i<idlength; i++) {
        idcheck = idcheck + (sidcheck[i]-48) * (pow(10,(idlength-(i+1)))); // take away 48 because of ascii values
    }

    return idcheck;
}

// login function
bool loginfunct() {
    std::string login = "?";
    int input = 0;

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
            // calling to function to convert the string id to an integer
            idcheck = stringtoint(sidcheck);
            if ((idcheck > teacher_id-1 && idcheck < 15000) || (idcheck > student_id-1) || validation == 0) {
                std::cout << "You have entered an invalid id, please ensure the id you have entered is correct" << std::endl;
                validation = 0;
            }
            std::cout << std::endl;
        }

        // if their id is less than 15000, they are a teacher
        if (idcheck <= teacher_id && idcheck >= 10000) {
            tindex = idcheck-10000;
            logout = teachlogin(tindex); // calling to teacher login function
            if (logout == 3) { // if they chose to logout
                return false; // go back to the main function and restart
            }
        // if their id is more than 15000, they are a student
        } else if (idcheck <= student_id && idcheck >= 15000) {
            sindex = idcheck-15000;
            logout = studlogin(courseslist, sindex); // calling to student login function bringing the course array
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

// main function
int main() {
    int quit = 0; // variable to loop code unless programme is quit
    int course_total=5;
    courseslist = new Course[course_total];

        courseslist[0].setName("Maths");
        courseslist[0].setCourseID("MATHS 1012");

        Lesson * lesson1 = new Lesson(1000, 0,0);
        courseslist[0].addLesson(lesson1);
            
        Lesson * lesson2 = new Lesson(1400,1,4);
        courseslist[0].addLesson(lesson2);        

        std::string course_name2 = "Physics";
        std::string course_id2 = "PHYSICS 1510";

        courseslist[1].setName("Physics");
        courseslist[1].setCourseID("PHYSICS 1510");

        Lesson * lesson3 = new Lesson(1400,3,0);
        courseslist[1].addLesson(lesson3);

        Lesson * lesson4 = new Lesson(1400,1,4);
        courseslist[1].addLesson(lesson4); 

        courseslist[2].setName("Chemistry");
        courseslist[2].setCourseID("CHEM 1200");
            
        Lesson * lesson5 = new Lesson(1300,2,1);
        courseslist[2].addLesson(lesson5);
            
        Lesson * lesson6 = new Lesson(1200,2,3);
        courseslist[2].addLesson(lesson6); 

        courseslist[3].setName("Object Oriented Programming");
        courseslist[3].setCourseID("COMP SCI 1102");

        Lesson * lesson7 = new Lesson(1000,2,4);
        courseslist[3].addLesson(lesson7);
            
        Lesson * lesson8 = new Lesson(1500,3,4);
        courseslist[3].addLesson(lesson8); 

        courseslist[4].setName("Introduction to Enginering");
        courseslist[4].setCourseID("ENG 1000");

        Lesson * lesson9 = new Lesson(1200,0,4);
        courseslist[4].addLesson(lesson9);
            
        Lesson * lesson10 = new Lesson(1200,0,1);
        courseslist[4].addLesson(lesson10); 

        Student student1;
        student1.setName("Byron");
        student1.setIdNum(&student_id);
        student1.enrol(&courseslist[0],98);
        student1.enrol(&courseslist[1],86);
        Students.push_back(&student1);

        Student student2;
        student2.setName("Dev");
        student2.setIdNum(&student_id);
        student2.enrol(&courseslist[2],95);
        student2.enrol(&courseslist[3],80);
        Students.push_back(&student2);

        Student student3;
        student3.setName("Max");
        student3.setIdNum(&student_id);
        student3.enrol(&courseslist[4],78);
        student3.enrol(&courseslist[1],83);
        Students.push_back(&student3);

        Teacher teacher1;
        teacher1.setName("Nate");
        teacher1.setIdNum(&teacher_id);
        teacher1.Person::enrol(&courseslist[1]);
        Teachers.push_back(&teacher1);

        Teacher teacher2;
        teacher2.setName("Sophia");
        teacher2.setIdNum(&teacher_id);
        teacher2.Person::enrol(&courseslist[0]);
        Teachers.push_back(&teacher2);

        Teacher teacher3;
        teacher2.setName("Austin");
        teacher2.setIdNum(&teacher_id);
        teacher2.Person::enrol(&courseslist[2]);
        Teachers.push_back(&teacher2);


    // }
    // for(int i = 0; i < 5; i++){
    //     std::string name;
    //     Student t_student;
    //     getline(std::cin, name);
    //     t_student.setName(name);
    //     t_student.setIdNum(&student_id);
        
    //     for (int i = 0; i < 3; i++){
    //         int course;
    //         int grade;
    //         std::cin >> course;
    //         std::cin >> grade;
    //         //std::cout << "here" << std::endl;
    //         t_student.enrol(&courseslist[i], grade);
    //     }
    //     Students.push_back(&t_student);
   
    // }
    // for(int i = 0; i < 5; i++){
    //     std::string name;
    //     Teacher * t_teacher = new Teacher;
    //     getline(std::cin, name);
    //     t_teacher->setName(name);
    //     t_teacher->setIdNum(&teacher_id);
    //     t_teacher->Person::enrol(&courseslist[i]);
    // }

    while (quit == 0) { // while loop to take user back to login page once finished
        quit = loginfunct(); // calling to login function
    }

    return 0;
}