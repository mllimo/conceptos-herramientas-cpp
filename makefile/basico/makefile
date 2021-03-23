# objetivo: prerrequisitos o dependencias
#		recetas o acciones para conseguir el objetivo

all: header.o main.o
	g++ header.o main.o -o programa

header.o: header.cc header.h
	g++ -c header.cc

main.o: main.cc
	g++ -c main.cc

clean:
	rm *.o programa

.PHONY: all clean