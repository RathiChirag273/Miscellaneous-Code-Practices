//17. Write a program to count the number of times an item is present in a linked list.

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

void count(int x)
{
  int count = 0;
  struct node *temp;
  temp = front;
  while (temp != NULL)
  {
  if (temp->data == x) count++;
  temp = temp->next;
  }

  printf("\n%d is repeated %d times\n", x, count);
}

void main()
{
  insert(1);
  insert(2);
  insert(3);
  insert(3);
  insert(2);
  insert(4);
  insert(2);
  count(2);
  count(3);
}
