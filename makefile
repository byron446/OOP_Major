school: main.cpp Person.o Course.o Teacher.o Student.o
	g++ -std=c++11 main.cpp Person.o Course.o Teacher.o Student.o -o school

Person.o: Person.h Course.h Person.cpp
	g++ -c -std=c++11 Person.cpp

Student.o: Person.h Student.h Student.cpp
	g++ -c -std=c++11 Student.cpp

Teacher.o: Person.h Teacher.h Teacher.cpp
	g++ -c -std=c++11 Teacher.cpp

Course.o: Course.h Course.cpp
	g++ -c -std=c++11 Course.cpp	

MainTest: maintester.cpp mainfunctiontester.cpp
	g++ -std=c++11 maintester.cpp mainfunctiontester.cpp -o main

StudentTest: StudentTester.cpp TestPerson.o TestStudent.o
	g++ -std=c++11 StudentTester.cpp TestPerson.o TestStudent.o -o studentd

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
