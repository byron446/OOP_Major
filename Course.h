#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <map>
#include "Lesson.h"

// Defines the parent Course Class.

class Course{


public:

    // The default constructors and destructors for the course class.
    Course();
    Course(std::string pname);
    ~Course();


    std::string getCourseId();

    std::string setCourseID(std::string pid);

    std::string getName();

    std::string setName(std::string pname);

    



private:
    std::string course_id;
    std::string name;

};

#endif