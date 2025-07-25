#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>

struct node
{
  int data;
  struct node *next;
} *front = NULL, *rear = NULL;

void sort()
{
  struct node *i,*j;
  int temp;
  i = front;
  j= front->next;
  while(i != NULL)
  {
    j = i->next;
    while(j != NULL)
    {
      if(i->data > j->data)
      {
        temp = i->data;
        i->data = j->data;
        j->data = temp;
      }
      j = j->next;
    }
    i = i->next;
  }
}

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

void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

int search(int x)
{
  struct node *temp;
  int pos = 0;
  char req = 't';
  temp = front;
  while(temp != NULL)
  {
    pos += 1;
    if(temp->data == x)
    {
      return pos;
    }
    temp = temp->next;
    req = 'f';
  }
  if(req == 'f')
  {
    return false;
  }
}

void disp()
{
  struct node *temp;
  temp = front;
  if(front == NULL)
  {
    printf("\n Queue is empty\n");
    return;
  }
  printf("\n The Queue elements are: ");
  while(temp != NULL)
  {
    printf("\t%d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void main()
{
  insert(4);
  insert(3);
  insert(2);
  insert(1);
  sort();
  disp();
  /*int pos = search(4);
  if(pos == false) printf("\n Element not found");
  else printf("\n Element found at %dth position",pos);
  getch();*/
}
