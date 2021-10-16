school: main.cpp Person.o Course.o Teacher.o Student.o
	g++ -std=c++11 main.cpp Person.o Course.o Teacher.o Student.o -o school

Person.o: Person.h Course.h Person.cpp
	g++ -c -std=c++11 Person.cpp

Student.o: Person.h Student.h Student.cpp
	g++ -c -std=c++11 Student.cpp

Teacher.o: Person.h Teacher.h Teacher.cpp
	g++ -c -std=c++11 Teacher.cpp

Course.o: Course.h Lesson.h Course.cpp
	g++ -c -std=c++11 Course.cpp	

MainTest: main.cpp mainfunction.cpp
	g++ -std=c++11 main.cpp mainfunction.cpp -o main

Lesson.o: Lesson.h Lesson.cpp
	g++ -c -std=c++11 Lesson.cpp

StudentTest: StudentTester.cpp Person.o Student.o Course.o Lesson.o
	g++ -std=c++11 StudentTester.cpp Person.o Student.o Course.o Lesson.o -o student

TestPerson.o: TestPerson.h TestPerson.cpp
	g++ -c -std=c++11 TestPerson.cpp

TestStudent.o: TestPerson.h TestStudent.h TestStudent.cpp
	g++ -c -std=c++11 TestStudent.cpp

TestTeacher.o: TestPerson.h TestTeacher.h TestTeacher.cpp
	g++ -c -std=c++11 TestTeacher.cpp

TeacherTest: TeacherTester.cpp TestPerson.o TestTeacher.o
	g++ -std=c++11 TestTeacher.cpp TestPerson.o TestTeacher.o -o teacher

CourseTest: CourseTest.cpp Course.o
	g++ -std=c++11 CourseTest.cpp Course.o -o course

clean:
	rm -f *.o
