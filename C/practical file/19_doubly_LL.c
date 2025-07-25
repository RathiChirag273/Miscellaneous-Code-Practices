//19. Write a program to implement Doubly Linked List, showing all the operations, like creation, display, insertion, deletion and searching.

#include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;

void traverse()
{
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	struct node* temp;
	temp = start;
  printf("\nElements are: ");
	while (temp != NULL) {
		printf("\t%d", temp->info);
		temp = temp->next;
	}
}

void insertAtPosition()
{
	int data, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;
	printf("\nEnter position : ");
	scanf("%d", &pos);
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	newnode->info = data;
	temp = start;
	if (start == NULL) {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}
	else if (pos == 1) {
		newnode->next = start;
		newnode->next->prev = newnode;
		newnode->prev = NULL;
		start = newnode;
	}
	else {
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		temp->next->prev = newnode;
	}
}

void deletePosition()
{
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter position : ");
		scanf("%d", &pos);
		if (pos == 1) {
			position = start;
			start = start->next;
			if (start != NULL) {
				start->prev = NULL;
			}
			free(position);
			return;
		}
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;
		free(position);
	}
}

int main()
{
	int choice;
	while (1) {
		printf("\n 1 Insertion\n");
		printf(" 2 Deletion\n");
    printf(" 3 Display\n");
		printf(" 4 To exit\n");
		printf(" Enter Choice :\n\t");
		scanf("%d", &choice);
		switch (choice) {
		case 1: insertAtPosition(); break;
		case 2: deletePosition(); break;
		case 3: traverse(); break;
		case 4: printf("\n\t\t\t End of Program");exit(1); break;
		default: printf("Incorrect Choice. Try Again \n"); continue;
		}
	}
	return 0;
}
