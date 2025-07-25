//1.	Write a C program to print all natural numbers from 1 to n.
#include<stdio.h>
void main()
{ int a,i;
  printf("Enter a number ");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    printf("%d ",i);
  }
}
