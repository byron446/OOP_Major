#ifndef LESSON_H
#define LESSON_H

#include <string>
#include <map>

class Lesson{

 public:   

    // Default constructor and destructor for the Lesson class.
    
    Lesson();
    ~Lesson();

    int setTime();

    void setDate();

    void setLesson(int p_lesson);


private:
    int lessonTime;
  
    std::string lessonDate;
    
    enum class LessonType {Lecture, Tutorial, Workshop, Practical};
    std::map <LessonType, int> duration {
        {LessonType::Lecture, 60},
        {LessonType::Tutorial, 60},
        {LessonType::Workshop, 120},
        {LessonType::Practical, 180},
    };
    LessonType lesson; 

};


#endif

