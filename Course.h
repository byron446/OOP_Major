#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <map>

// Defines the parent Course Class.

class Course{


public:

    // The default constructors and destructors for the course class.
    Course();
    ~Course();


    std::string getCourseId();

    std::string getName();

    int getTime(); 

    int getDuration();

    std::string getDate();


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