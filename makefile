school: main.o Person.o Course.o Teacher.o Student.o
	$(CXX) main.o Person.o Course.o Teacher.o Student.o -o school

main.o: main.cpp Person.h Course.h Teacher.h Student.h
	$(CXX) -c main.cpp