//Tyson Fosdick
//ECE 361 Fall 2018
//Practice code
//linkedList.h

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct node
{
	int data;
	int key;
	
	struct node *next;
	struct node *prev;
};

struct node *head; //Points to the first element in list

struct node *tail;  //Points to the last element in list

//Function prototypes

void insertFirst(int key, int data); //Inserts element to the beginning of the list returns true is successful
struct node* deleteFirst(); //Deletes element from the beginning of the list returns true if successful
//bool insertLast(int key, int data); //Inserts element at the end of the list, returns true if successful
//bool deleteLast(); //Deletes element at the end of the list, returns true if successful
//bool insertAfter(int key, int toAdd,  int data); //Inserts element after element in list, returns true if successful
//bool deleteItem(int key); //Deletes element from list specified by key, returns true if successful
void displayForward(); //Displays list from front to back
//void displayBackward(); //Displays list from rear to front
bool isEmpty(); //Helper function checks if list is empty and returns true
struct node* find(int key);  //helper function for element retrieval
void mainMenu();
void linkedListMenu();



#endif
