main : huge.o main.o
	g++ -o main main.o huge.o
huge.o : huge.cpp huge.h
	g++ -c huge.cpp
main.o : main.cpp huge.h
	g++ -c main.cpp
clean :
	rm *.o
