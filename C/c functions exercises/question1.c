//1.	Write a C program to find cube of any number using function.
#include <stdio.h>
void cube(double);
void main()
{   double num;
    printf("enter number : ");
    scanf("%lf",&num);
    cube(num);
}
void cube(double num)
{
    double cube;
    cube=num*num*num;
    printf("CUBE of %lf = %lf",num,cube);
}
