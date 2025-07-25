//21.	Write a C program to find power of a number using for loop.
#include <stdio.h>
void main()
{   float base;int power, i;
    double answer=1;
    printf("enter base : ");
    scanf(" %f",&base);
    printf("enter power(integer only) : ");
    scanf(" %d",&power);
    for(i=1;i<=power;i++)
    {
        answer*=base;
    }
    printf("%f raised to %d = %lf",base,power,answer);
}
