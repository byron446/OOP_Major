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
    Lesson(int pltime, int plesson, int pdate);
    // Lesson(int ptime, int pdate, int type);

    ~Lesson();

    // Allows times and dates to be assines to courses

    void setTime(int pltime);

    int getTime(); 

    void setDate(int pdate);

    int getDate();

    // Allows a course to be chosen out of a set list of avaliable courses

    void setLesson(int plesson);

    enum LessonType getLesson();
 
//    void setDuration(int pduration);

    int getDuration();

   
    std::string cLesson;

private:
    int lessonTime;

    int lessonDuration;
  
    int lessonDate;
    
    LessonType lesson; 

};


#endif

