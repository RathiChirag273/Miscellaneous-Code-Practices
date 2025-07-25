//1.	Write a C program to find maximum between two numbers.
#include <stdio.h>
void main()
{   float n1,n2;
    printf("enter 2 numbers : ");
    scanf("%f",&n1);
    scanf("%f",&n2);
    if(n1>n2) printf("%f > %f",n1,n2);
    else if(n2>n1) printf("%f > %f",n2,n1);
    else printf("%f = %f",n1,n2);
}
