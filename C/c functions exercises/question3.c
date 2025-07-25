//3.	Write a C program to find maximum and minimum between two numbers using functions.
#include <stdio.h>
void check(float , float);
void main()
{
    float num1,num2;
    printf("enter two numbers : \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    check(num1,num2);
}
void check(float n,float m)
{
    if(m>n) printf("maximum = %f\n minimum = %f",m,n);
    else printf("maximum = %f\n minimum = %f",n,m);
}
