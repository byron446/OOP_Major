school: main.cpp Person.o Course.o Teacher.o Student.o
	g++ main.cpp Person.o Course.o Teacher.o Student.o -o school

Person.o: Person.h Person.cpp
	g++ -c Person.cpp

Student.o: Person.h Student.h Student.cpp
	g++ -c Student.cpp

Teacher.o: Person.h Teacher.h Teacher.cpp
	g++ -c Teacher.cpp

Course.o: Course.h Course.cpp
	g++ -c Course.cpp	

StudentTest: StudentTest.cpp Person.o Course.o Student.o
	g++ StudentTest.cpp Person.o Course.o Student.o -o student

TeacherTest: TeacherTest.cpp Person.o Course.o Teacher.o
	g++ TeacherTest.cpp Person.o Course.o Teacher.o -o teacher

CourseTest: CourseTest.cpp Course.o
	g++ CourseTest.cpp Course.o -o course

clean:
	rm -f *.o
