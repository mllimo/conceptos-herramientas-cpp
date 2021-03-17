# objetivo: prerrequisitos o dependencias
#		recetas o acciones para conseguir el objetivo

header.o: header.cc header.h
	g++ -c header.cc

main.o: main.cc header.h
	g++ -c main.cc header.cc

all: header.o main.o
	g++ header.o main.o -o programa

clean:
	rm *.o programa