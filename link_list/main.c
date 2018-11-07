//Tyson Fosdick
//ECE 361 Fall 2018
//Practice code
//main.c for linked list driver


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "main.h"
#include "linkedList.h"


int main()
{
	
	
	//build a linked list to manipulate
	
	insertFirst(1,4);
	insertFirst(2,5);
	insertFirst(3,4);
        insertFirst(4,5);
	insertFirst(5,4);
        insertFirst(6,5);
	
	printf("Current List: \n");
	displayForward();
	//Load main menu
	mainMenu();

	deleteFirst(7);
	displayForward();
	
return 0;
}

//Function declarations
void mainMenu() //User interface to access different API's
{
	int selection;

	do
	{
		printf("\nWelcome to Foscorp data structure management tool\n");
		printf("[1]	Linked List Menu \n");
		printf("[2]	BST Menu \n");
		printf("[0]	Exit API \n");
		printf("\nMake a selection and press enter ");
		scanf("%d", &selection);
		printf("You entered %d  \n", selection);
		
		switch(selection)
		{
			case 1:
				printf("\nLoading LLL Menu.... \n");
				linkedListMenu();
			case 2:
				printf("\nUnder Construction.. \n");
				break;
		}

	}while(selection != 0);
	
	printf("\n\nThanks for choosing Foscorp! \n");
	exit(0);

}
void linkedListMenu() //User interface for linked list implementation
{
	int selection;
	int key;
	int data;

	do
	{
		printf("\nLinked List tools \n");
		printf("[1]	Insert first \n");
		printf("[2]	Delete first \n");
		printf("[3]	Display forwards \n");
		printf("[4]	Find Element \n");
		printf("[0]	Return to Main Menu \n");
		printf("\nMake a selection and press enter \n");
		scanf("%d", &selection);
		
		switch(selection)
		{
			case 1:
				printf("Enter key and press enter \n");
				scanf("%d", &key);
				printf("Enter data value and press enter \n");
				scanf("%d", &data);
				insertFirst(key, data);
				break;
			case 2:
				printf("Deleting the first element of the list \n");
				deleteFirst();
				break;

			case 3:
				printf("Here is the list in the natural order-  \n");
				displayForward();
				break;
			case 4:
				printf("Enter key of element \n");
				scanf("%d", &key);
				struct node *toFind = find(key);

				if(toFind != NULL)
				{
					printf("Found Element: ");
      					printf("(%d,%d) ",toFind->key,toFind->data);
      					printf("\n");  
   				} 
				else 
				{
      					printf("Element not found.");
				}
				break;
   		}
		
	}while(selection != 0);
	printf("\nReturning to Main Menu... \n");
	mainMenu();

}

void bstMenu() //Binary Search tree menu
{

	printf("This menu is under construction..\n Try again later.\n");

}


