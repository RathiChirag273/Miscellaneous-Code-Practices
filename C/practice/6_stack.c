#include<stdio.h>
int A[10],top=-1;
void push()
{
  if(top<9)
  {
    top+=1;
    printf("enter element ");
    scanf("%d",&A[top]);
    printf("push operation successful\n");
  }
  else printf("\n\t\t\tTHE STACK IS FULL");
getch();
}
void pop()
{
  if(top!=-1)
  {
    top-=1;
    printf("pop operation successful\n");
  }
  else printf("\n\t\t\tTHE STACK IS EMPTY");
getch();
}
void disp()
{
  printf("\nThe edited stack is \n");
  for(int i=top;i>=0;i--)
  {
    printf("%d\n",A[i]);
  }
  getch();
}
int main()
{
  int n;
  while(n!=4)
  {
    system("cls");
    printf("\t\t\tThis is program to perform following tasks\n 1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
    printf("Enter your choice ");
      scanf("%d",&n);
  switch(n)
  {
    case 1: system("cls");push();break;
    case 2: system("cls");pop();break;
    case 3: system("cls");disp();break;
    case 4: break;
    default : system("cls");printf("\t\t\tWRONG CHOICE\n");
  }
  }
system("cls");
printf("\n\t\t\tEnd of program");
return 0;
}
