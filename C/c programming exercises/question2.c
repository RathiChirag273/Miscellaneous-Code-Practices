//2.	 Write a C program to print all natural numbers in reverse (from n to 1).
#include<stdio.h>
void main()
{ int a,i;
  printf("Enter a number ");
  scanf("%d",&a);
  for(i=a;i>=1;i--)
  {
      printf("%d ",i);
  }
}
