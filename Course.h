#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <map>
#include "Lesson.h"

// Defines the Course Class.

class Course{


public:

    // The default constructors and destructors for the course class.
    Course();
    Course(std::string pname);
    Course(int lesson_num);
    ~Course();


    std::string getCourseId();

    void setCourseID(std::string pid);

    std::string getName();

    void setName(std::string pname);

    



private:
    std::string course_id;
    std::string name;
    Lesson* lessons;

};

#endif