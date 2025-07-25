#include<stdio.h>
# define Q 10
int cqueue_arr[Q], front = -1, rear = -1;


void insert(int item)
{
  if((front == 0 && rear == Q-1) || (front == rear+1))
  {
    printf("Queue Overflow \n");
    return;
  }
  if(front == -1)
  {
    front = 0;
    rear = 0;
  }
  else
  {
    if(rear == Q-1)
    rear = 0;
    else
    rear = rear+1;
  }
  cqueue_arr[rear] = item ;
}


void deletion()
{
  if(front == -1)
  {
    printf("Queue Underflown");
    return ;
  }
  printf("Element deleted from queue is : %dn",cqueue_arr[front]);
  if(front == rear)
  {
    front = -1;
    rear=-1;
  }
  else
  {
    if(front == Q-1)
    front = 0;
    else
    front = front+1;
  }
}


void display()
{
  int front_pos = front,rear_pos = rear;
  if(front == -1)
  {
    printf("Queue is emptyn");
    return;
  }
  printf("Queue elements :n");
  if( front_pos <= rear_pos )
  while(front_pos <= rear_pos)
  {
    printf("%d ",cqueue_arr[front_pos]);
    front_pos++;
  }
  else
  {
    while(front_pos <= Q-1)
    {
      printf("%d ",cqueue_arr[front_pos]);
      front_pos++;
    }
    front_pos = 0;
    while(front_pos <= rear_pos)
    {
      printf("%d ",cqueue_arr[front_pos]);
      front_pos++;
    }
  }
  printf("n");
}


void main()
{
  int choice,item;
  do
  {
    printf("\n Enter your choice :\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n\t");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1 : system("cls");
               printf("Input the element for insertion in queue : ");
               scanf("%d", &item);
               insert(item);
               break;
      case 2 : system("cls");
               deletion();
               break;
      case 3 : system("cls");
               display();
               break;
      case 4 : system("cls");
               printf("\n\t\t\tEnd of program");
               break;
      default: printf("Wrong choicen");
    }
  }while(choice!=4);
}
