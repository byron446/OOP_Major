#ifndef LESSON_H
#define LESSON_H

#include <string>
#include <vector>
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

    int getTime(); 

    void setDate();

    void getDate();

    void setLesson(LessonType plesson);

    void getLesson();
 
    int setDuration();

    int getDuration();

   


private:
    int lessonTime;
  
    std::string lessonDate;
    
    LessonType lesson; 

};


#endif

