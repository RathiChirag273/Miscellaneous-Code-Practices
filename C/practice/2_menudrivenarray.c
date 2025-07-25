#include<stdio.h>
#include <stdlib.h>
int A[100],elnum;
void disp()
{
  for(int i=0;i<elnum;i++) printf("\t%d",A[i]);
}
void accept_values()
{
  printf("\nEnter number of elements [max 100 elements] ");
  scanf("%d",&elnum);
  printf("Enter the elements below \n");
  for(int i=0;i<elnum;i++)
  {
    scanf("%d",&A[i]);
  }
}
void insertion()
{
  int pos,ele;
  printf("\nEnter position where element is to be inserted ");
  scanf("%d",&pos);
  printf("\nEnter Element ");
  scanf("%d",&ele);
  for(int i=elnum;i>=pos;i--)
  {
    A[i]=A[i-1];
  }
  A[pos-1]=ele;
  elnum++;
  printf("The new array is ");
  disp();
}
void deletion()
{
  int pos;
  printf("\nEnter position of element to be deleted ");
  scanf("%d",&pos);
  for(int i=pos-1;i<elnum;i++)
  {
    A[i]=A[i+1];
  }
  elnum--;
  printf("The new array is ");
  disp();
}
void searching()
{
  int ele,pos;
  printf("\nEnter element to be searched ");
  scanf("%d",&ele);
  for(int i=0;i<elnum;i++)
  {
    if(A[i]==ele)
    {
      pos=++i;break;
    }
  }
  printf("\nThe element %d is at positopn %d",ele,pos);
}
void sorting()
{ int temp;
   for(int i=0;i<elnum;i++)
   {
     for(int j=i+1;j<=elnum;j++)
     {
      if(A[i]>A[j])
      {
       temp=A[i];
       A[i]=A[j];
       A[j]=temp;
      }
     }
    }
    printf("The sorted array is : ");
   disp();
}
int main()
{ start:
  system("cls");
  accept_values();
  mid:
  printf("\n\t\t\tThis is program to perform following tasks\n 1. Insertion\n 2. Deletion\n 3. Searching\n 4. Sorting\n");
  printf("Enter your choice ");
  int n;char ch='y',ch2;
  scanf("%d",&n);
  while(n)
  {
  switch(n)
  {
    case 1: system("cls");insertion();break;
    case 2: system("cls");deletion();break;
    case 3: system("cls");searching();break;
    case 4: system("cls");sorting();break;
    default : system("cls");printf("\t\t\tWRONG CHOICE\n"); goto mid;
  }
  getch();
  printf("\nDo you want to keep previous elements (y/n) ");
  scanf(" %c",&ch2);
  if(ch2=='y') goto mid;
  printf("\nDo you want to continue program (y/n) ");
  scanf(" %c",&ch);
  if(ch=='y')goto start;
  else goto end;
}
end:
system("cls");
printf("\n\t\t\tEnd of program");
  return 0;
}
