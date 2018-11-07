//Tyson Fosdick
//ECE 361 Fall 2018
//Practice code
//linkedList.c


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "linkedList.h"


//Function prototypes

void insertFirst(int key, int data) //Inserts element to the beginning of the list returns true is successful
{
		
	//Create the link pointer
	struct node *link =(struct node*) malloc(sizeof(struct node));
	link->key = key;
	link->data = data;

	link->next = head; //Point to old first

	head = link; //Point head to new link

}

struct node* deleteFirst() //Deletes element from the beginning of the list returns true if successful
{
	
	//Save first link
	struct node *tempLink = head;

	//head next becomes head
	head = head->next;

	//return deleted
	return tempLink;
}
/*bool insertLast(int key, int data) //Inserts element at the end of the list, returns true if successful
{


	return 0;
}

bool deleteLast()  //Deletes element at the end of the list, returns true if successful
{



	return 0;
}

bool insertAfter(int key, int toAdd,  int data) //Inserts element after element in list, returns true if successful
{



	return 0;
}
*/
struct node* deleteItem(int key)  //Deletes element from list specified by key, returns true if successful
{
	struct node* current = head;
	struct node* previous = NULL;

	if(!head) {
		return NULL;
	}
	
	while(current->key != key)
	{
		if(current->next == NULL)
		{
			return NULL;
		}
		else
		{
			previous = current;
			current = current->next;
		}

	return 0;
}

void displayForward() //Displays list from front to back
{
	struct node *ptr = head;
	printf("\n[ ");
	while(ptr != NULL)
	{
		printf("(%d,%d) ", ptr->key, ptr->data);
		ptr = ptr->next;
	}

	printf(" ]");
 
}
//void displayBackward(); //Displays list from rear to front
struct node* find(int key)
{
   //start from the first link
   struct node* current = head;

   //if list is empty
   if(head == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->key != key) {

      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //go to next link
         current = current->next;
      }
   }

   //if data found, return the current Link
   return current;
}

bool isEmpty() //Helper function checks if list is empty and returns true
{
	return head == NULL;
}







