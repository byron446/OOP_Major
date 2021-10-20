// student class
#include "Student.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <fstream>

// Default constructor
Student::Student()
{

}

// enrols a student in a new course, by taking a pointer to the new course, 
// and a current grade.
void Student::enrol(Course* new_course, int grade)
{
    // call enrol method to add new_course to vector of courses
    bool course_add = Person::enrol(new_course);

    // if the student was not already enrolled, add a 
    if (course_add == true){
        grades.push_back(grade);
    }
}

// Sets the grade for a specific course
void Student::setGrade(int grade, Course* pcourse)
{
    int i = getCourseIndex(pcourse);
    grades.at(i) = grade;
}

int Student::getGrade(Course* pcourse)
{
    int i = getCourseIndex(pcourse);
    return grades.at(i);
}

// removes a student froma course by taking a pointer to the exit course, 
// and its corresponding grade.
void Student::leaveCourseStudent(Course* exit_course)
{
    int i  = getCourseIndex(exit_course);
    bool left = leaveCourse(exit_course);
    if(i >= 0 && left == true){
        grades.erase(grades.begin()+i);
    }
}

// function to print a formatted list of the courses a student is enrolled in, 
// along with their current grades.
void Student::printGrades()
{
    std::cout << "Your grades in each subject are:" << std::endl;

    for(int i = 0; i < getCourses().size(); i++){
        std::cout << getCourses().at(i)->getCourseId() << " " << getCourses().at(i)->getName() << ": " << grades.at(i) << std::endl;
    }

    


}

void Student::exportGrades(){

    std::ofstream gradesfile("Grades1.csv");
    // gradesfile.open ("Grades.csv");
    gradesfile << "Your grades are. \n";

    for(int i = 0; i < getCourses().size(); i++){
        gradesfile <<  getCourses().at(i)->getCourseId();
        gradesfile << ",";
        gradesfile << getCourses().at(i)->getName();
        gradesfile << ",";
        gradesfile << grades.at(i);
        gradesfile << "\n";  
    }
   
    gradesfile.close();


}

// Default destructor
Student::~Student()
{

}
