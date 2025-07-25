//18. Write a program to increment the data part of every node present in a linked list by 10. Display the data both before incrimination and after.

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
} *front = NULL, *rear = NULL;

void insert(int x)
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = x;
  newnode->next = NULL;
  if((front == NULL)&&(rear == NULL))
  {
    rear = front = newnode;
    return;
  }
  rear->next = newnode;
  rear = newnode;
}

void update()
{
  struct node *temp;
  temp = front;
  while (temp != NULL)
  {
  temp->data += 10;
  temp = temp->next;
  }
}

void disp()
{
  struct node *temp;
  temp = front;
  if(front == NULL)
  {
    printf("\n List is empty\n");
    return;
  }
  printf("\n The List elements are: ");
  while(temp != NULL)
  {
    printf("\t%d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void main()
{
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  insert(6);
  insert(7);
  printf("\n List before increment: ");
  disp();
  update();
  printf("\n List after increment: ");
  disp();
}
