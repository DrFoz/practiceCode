all: LLL

LLL: dbLinkList.o main.o
	gcc -g -Wall dbLinkList.o main.o -o LLL

dbLinkList.o: dbLinkList.c dbLinkList.h
	gcc -Wall -c dbLinkList.c

main.o: main.c
	gcc -Wall -c main.c

clean:
	rm -f *.o LLL
