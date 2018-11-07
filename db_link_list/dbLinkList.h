//Tyson Fosdick
//dbLinkList.h

#ifndef DB_LINK_LIST_H
#define DB_LINK_LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {

	int key;
	int data;
	
	struct node *next;
};

	struct node *head;
	struct node *current;


//Function prototypes
void printList();
void insertFirst(int key, int data);
struct node* deleteFirst();
bool isEmpty();
struct node* find(int key);
struct node* delete(int key);
void sort();
void reverse(struct node** head_ref);


#endif
