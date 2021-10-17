#ifndef LESSON_H
#define LESSON_H

#include <string>
#include <vector>
#include <map>

class Lesson{
private:
    enum class LessonType {Lecture, Tutorial, Workshop, Practical};
   
    std::map <LessonType, int> duration;
 public:   

    // Default constructor and destructor for the Lesson class.
    
    Lesson();
    Lesson(int ptime, std::string pdate, int type);

    ~Lesson();

    void setTime(int pltime);

    int getTime(); 

    void setDate(std::string pdate);

    std::string getDate();

    void setLesson(int plesson);

    enum LessonType getLesson();
 
    void setDuration(int pduration);

    int getDuration();

   
    std::string cLesson;

private:
    int lessonTime;

    int lessonDuration;
  
    std::string lessonDate;
    
    LessonType lesson; 

};


#endif

