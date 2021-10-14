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

    int setTime(int pltime);

    int getTime(); 

    std::string setDate(std::string pdate);

    std::string getDate();

    void setLesson(LessonType plesson);

    std::string getLesson();
 
    int setDuration(int pduration);

    int getDuration();

   
    std::string cLesson;

private:
    int lessonTime;

    int lessonDuration;
  
    std::string lessonDate;
    
    LessonType lesson; 

};


#endif

