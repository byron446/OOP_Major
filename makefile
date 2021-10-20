school: main.cpp Person.o Course.o Teacher.o Student.o
	g++ -std=c++11 main.cpp Person.o Course.o Teacher.o Student.o -o school

Person.o: Person.h Course.h Person.cpp
	g++ -c -std=c++11 Person.cpp

Student.o: Person.h Student.h Student.cpp
	g++ -c -std=c++11 Student.cpp

Teacher.o: Person.h Student.h Teacher.h Teacher.cpp
	g++ -c -std=c++11 Teacher.cpp

Course.o: Course.h Lesson.h Course.cpp
	g++ -c -std=c++11 Course.cpp	

MainTest: maintester.cpp
	g++ -std=c++11 maintester.cpp -o main

Lesson.o: Lesson.h Lesson.cpp
	g++ -c -std=c++11 Lesson.cpp

StudentTest: StudentTester.cpp Person.o Student.o Course.o Lesson.o
	g++ -std=c++11 StudentTester.cpp Person.o Student.o Course.o Lesson.o -o student

TestPerson.o: TestPerson.h TestPerson.cpp
	g++ -c -std=c++11 TestPerson.cpp

TestStudent.o: TestPerson.h TestStudent.h TestStudent.cpp
	g++ -c -std=c++11 TestStudent.cpp

TeacherTest: TeacherTester.cpp Person.o Teacher.o Student.o Course.o Lesson.o
	g++ -std=c++11 TeacherTester.cpp Person.o Teacher.o Student.o Course.o Lesson.o -o teacher

CourseTest: CourseTest.cpp Course.o
	g++ -std=c++11 CourseTest.cpp Course.o -o course

LessonTest: Course.h Lesson.h LessonTester.cpp Lesson.o
	g++ -c -std=c++11 LessonTester.cpp -o Lesson	


clean:
	rm -f *.o
