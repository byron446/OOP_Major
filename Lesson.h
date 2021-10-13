#ifndef LESSON_H
#define LESSON_H

#include <string>
#include <map>

class Lesson{
private:
    enum class LessonType {Lecture, Tutorial, Workshop, Practical};
   
    std::map <LessonType, int> duration {
        {LessonType::Lecture, 60},
        {LessonType::Tutorial, 60},
        {LessonType::Workshop, 120},
        {LessonType::Practical, 180},
    };

 public:   

    // Default constructor and destructor for the Lesson class.
    
    Lesson();
    ~Lesson();

    int setTime();

    void setDate();

    void setLesson(LessonType plesson);


private:
    int lessonTime;
  
    std::string lessonDate;
    

    LessonType lesson; 

};


#endif

