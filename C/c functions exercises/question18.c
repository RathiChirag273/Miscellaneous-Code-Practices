//18.	Write a C program to find factorial of any number using recursion.
#include <stdio.h>
void fact(int);
int i=1; long int f=1;
void main()
{   int a;
    printf("enter number for factorial = ");
    scanf("%d",&a);
    fact(a);
}
void fact(int a)
{
    if(i<=a)
    {
        f*=i;i++;fact(a);
    }
    else printf("factorial = %ld",f);
}
