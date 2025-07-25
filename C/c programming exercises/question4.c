//4.	Write a C program to print all even number between 1 to 100.
#include<stdio.h>
void main()
{ int i;
  printf("even numbers between 1-100 are : \n");
  for (i = 1; i < 100; i++)
  {
     if (i%2==0)
     {
       printf("%d ",i);
     }
  }
}
