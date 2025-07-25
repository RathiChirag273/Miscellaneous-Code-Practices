//12.	Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
#include <math.h>
void main()
{   int i,n,count=0,number;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i*=10) count++;
    number=n/pow(10,count-1);
    printf("SUM of first and last digit = %d",number+(n%10));
}
