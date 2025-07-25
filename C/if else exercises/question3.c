//3.	Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
void main()
{   float n1;
    printf("enter number : ");
    scanf("%f",&n1);
    if(n1>0) printf("%f is positive",n1);
    else if(n1<0) printf("%f is negative",n1);
    else printf("%f is zero",n1);
}
