//6.	Write a C program to check whether a year is leap year or not.
#include <stdio.h>
void main()
{   int n1;
    printf("enter year : ");
    scanf("%d",&n1);
    if(n1%4==0) printf("%d is a leap year",n1);
    else printf("%d is not a leap year",n1);
}
