#ifndef TESTPERSON_H
#define TESTPERSON_H

#include <string>
#include <vector>

// Defines a test version person parent class that is does not utilise the course class
class TestPerson 
{
public:  
    
    // Default constructor/destructor, and a constructor that takes a name
    TestPerson();
    ~TestPerson();
    TestPerson(std::string pname);

    // Access functions for the name of a person
    void setName(std::string pname);
    std::string getName() const;

    // Access functions for the id number of a person
    void setIdNum(int* pid_num);
    int getIdNum();

    // Functions to add or remove a course, and to print all courses a person 
    // is currently enrolled in
    void enrol(std::string new_course, std::string course_id);
    std::vector<std::string> &getCourseNames();
    std::vector<std::string> &getCourseid();
    int leaveCourse(std::string exit_course);
    void printCourses();

    // virtual function to print the grades a person has permission to see
    virtual void printGrades() = 0; 
private:
    std::string name;
    int id_num;
    std::vector <std::string> course_names;
    std::vector <std::string> course_ids;
};

#endif