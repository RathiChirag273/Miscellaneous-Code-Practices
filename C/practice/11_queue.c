#include<stdio.h>
#include<conio.h>
# define n 5
int Q[n], last = -1;
void enqueue()
{
  if(last == n-1) printf("\n\t\t\tQUEUE IS FULL");
  else
  {
    last += 1;
    int x;
    printf("\n Enter element ");
    scanf("%d",&x);
    Q[last] = x;
    printf("\n Element added successfully");
  }
  getch();
}

void dequeue()
{
  if(last == -1) printf("\n\t\t\tQUEUE IS EMPTY");
  else
  {
    printf("\n Dequeued element is %d",Q[0]);
    rearrange();
  }
  getch();
}

void rearrange()
{
  for(int i = 0; i <= last; i++)
  {
    Q[i] = Q[i+1];
  }
  last -= 1;
}

void disp()
{
  if(last == -1) printf("\n\t\t\tQUEUE IS EMPTY");
  else
  {
    for(int i = 0; i <= last; i++) printf("\t %d",Q[i]);
  }
  getch();
}

void peek()
{
  printf("Queue head is %d", Q[0]);
  getch();
}

void main()
{ int choice;
  do {
    system("cls");
    printf("\n Enter a choice \n 1. Enqueue \n 2. Dequeue \n 3. display \n 4. Peek \n 5. Exit \n\t");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:system("cls"); enqueue();break;
      case 2:system("cls"); dequeue();break;
      case 3:system("cls"); disp();break;
      case 4:system("cls"); peek();break;
      case 5:system("cls"); printf("\n\t\t\tEnd of program");break;
      default: printf("\nWRONG CHOICE");
    }
  } while(choice != 5);
}
