#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <map>
class Course
{
public:
    std::string getCourseId();
    std::string getName();

private:
    std::string course_id;
    std::string name;

    enum class LessonType {Lecture, Tutorial, Workshop, Practical};
    std::map <LessonType, int> duration {
        {LessonType::Lecture, 60},
        {LessonType::Tutorial, 60},
        {LessonType::Workshop, 120},
        {LessonType::Practical, 180},
    };
};

#endif