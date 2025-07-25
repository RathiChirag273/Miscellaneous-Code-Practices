//4.	Write a C program to check whether a number is even or odd using functions.
#include <stdio.h>
void odd_even(int);
void main()
{
    int num1;
    printf("enter number : ");
    scanf("%d",&num1);
    odd_even(num1);
}
void odd_even(int n)
{
    if(n%2==0) printf(" %d is even",n);
    else printf(" %d is odd",n);
}
