#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *next;
} *front = NULL, *rear = NULL;

void dequeue()
{
  struct node *temp;
  temp = front;
  if(temp == NULL)
  {
    printf("\nQueue is empty\n");
    return;
  }
  if(front == rear)
  {
    printf("\n The removed element is %d\n",temp->data);
    front = rear = NULL;
    free(temp);
    return;
  }
  printf("\n The removed element is %d\n",temp->data);
  front = front->next;
  free(temp);

}

void enqueue(int x)
{
  struct node *newnode;
  newnode = (struct node*)malloc(sizeof(struct node));
  newnode->data = x;
  newnode->next = 0;
  if((front == NULL)&&(rear == NULL))
  {
    rear = front = newnode;
    return;
  }
  rear->next = newnode;
  rear = newnode;
}

void peek()
{
  if(front == NULL)
  {
    printf("\n Queue is empty\n");
    return;
  }
  printf("\n The head of the queue is: %d\n",front->data);
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
  while(temp != 0)
  {
    printf("\t%d",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void main()
{
  printf("\n This is program to implement queue using linked list");
  int n = 0, num;
  while(n != 5)
  {
    printf("\n Choose from the options below: \n 1. Enqueue \n 2. Dequeue \n 3. Peek \n 4. Display \n 5. Exit \n\t");
    scanf("%d",&n);
    switch (n)
    {
      case 1: system("cls");
              printf("\n Enter element: ");
              scanf("%d",&num);
              enqueue(num);
              break;
      case 2: system("cls");
              dequeue();
              break;
      case 3: system("cls");
              peek();
              getch();
              break;
      case 4: system("cls");
              disp();
              getch();
              break;
      case 5: system("cls");
              printf("\n\t\t\tEND OF PROGRAM");
              break;
      default: printf("\nWRONG CHOICE");
    }
  }
}
