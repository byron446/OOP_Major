#ifndef COURSE_H
#define COURSE_H

#include <string>
class Course
{
public:
    std::string getCourseId();
    std::string getName();

private:
    std::string course_id;
    std::string name;
};

#endif