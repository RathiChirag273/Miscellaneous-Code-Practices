//3.	Write a C program to print all alphabets from a to z.
#include<stdio.h>
void main()
{ char a;int i;
  printf("choose : \n 1. upper case alphabets\n 2. lower case letters \n");
  scanf("%d",&a);
  printf("all alphabets are \n");
  switch(a)
  {
      case 1: for (i = 65; i <91; i++)
              {
                  printf("%c ", i);
              }break;
      case 2: for(i=97;i<123;i++)
              {
                  printf("%c ",i);
              }break;
      default: printf("not an option");
  }
}
