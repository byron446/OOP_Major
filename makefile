school: main.cpp Person.o Course.o Teacher.o Student.o
	g++ main.cpp Person.o Course.o Teacher.o Student.o -o school

Person.o: Person.h Course.h Person.cpp
	g++ -c Person.cpp

Student.o: Person.h Student.h Student.cpp
	g++ -c Student.cpp

Teacher.o: Person.h Teacher.h Teacher.cpp
	g++ -c Teacher.cpp

Course.o: Course.h Course.cpp
	g++ -c Course.cpp

MainTest: main.cpp mainfunction.cpp
	g++ main.cpp mainfunction.cpp -o main	

StudentTest: StudentTester.cpp TestPerson.o TestStudent.o
	g++ StudentTester.cpp TestPerson.o TestStudent.o -o student

TestPerson.o: TestPerson.h TestPerson.cpp
	g++ -c TestPerson.cpp

TestStudent.o: TestPerson.h TestStudent.h TestStudent.cpp
	g++ -c TestStudent.cpp

TeacherTest: TeacherTest.cpp Person.o Course.o Teacher.o
	g++ TeacherTest.cpp Person.o Course.o Teacher.o -o teacher

CourseTest: CourseTest.cpp Course.o
	g++ CourseTest.cpp Course.o -o course

clean:
	rm -f *.o
