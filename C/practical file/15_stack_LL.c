//15. Write a program to implement Stack, using Linked List. Implement Push, Pop and display operations.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
} *top = NULL;
void pop()
{
  struct node *temp;
  temp = top;
  if(temp == NULL)
  {
    printf("\n\t\tSTACK IS EMPTY"); return;
  }
  printf("\n The removed element is %d",temp->data);
  top = top->next;
  free(temp);
}
void push(int x)
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = x;
  newnode->next = top;
  top = newnode;
}
void peek()
{
  if(top == NULL)
  {
    printf("\n\t\tSTACK IS EMPTY"); return;
  }
  printf("\n The top element is %d\n",top->data);
}
void disp()
{
  struct node *temp;
  temp = top;
  if(temp == NULL)
  {
    printf("\n\t\tSTACK IS EMPTY"); return;
  }
  printf("\n The elements are: ");
  while(temp != NULL)
  {
    printf("\t%d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
void main()
{
  printf("\n This is program to implement stack using linked list");
  int n = 0, num;
  while(n != 5)
  {
    printf("\n Choose from the options below: \n 1. Push \n 2. Pop \n 3. Peek \n 4. Display \n 5. Exit \n\t");
    scanf("%d",&n);
    switch (n)
    {
      case 1: printf("\n Enter element: "); scanf("%d",&num);
              push(num); break;
      case 2: pop(); break;
      case 3: peek(); break;
      case 4: disp(); break;
      case 5: printf("\n\t\t\tEND OF PROGRAM"); break;
      default: printf("\nWRONG CHOICE");
    }
  }
}
