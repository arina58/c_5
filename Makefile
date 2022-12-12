main: main.o fish.o
	gcc main.o fish.o -o fish

main.c: main.c fish.h
	gcc -c main.c

fish.o: fish.c fish.h
	gcc -c fish.c