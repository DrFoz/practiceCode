#Makefile for linkedList implementation
#Tyson Fosdick 2018

all: linkedList

linkedList: main.o linkedList.o
	gcc -g -Wall main.o linkedList.o -o linkedList

main.o: main.c linkedList.h 
	gcc -g -Wall -c main.c

linkedList.o: linkedList.c linkedList.h
	gcc -g -Wall -c linkedList.c

clean:
	rm -f *.o linkedList
