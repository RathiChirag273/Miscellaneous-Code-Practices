//20.	Write a C program to find GCD (HCF) of two numbers using recursion.
#include <stdio.h>
void gcd(int,int);
int hcf,i=1;
void main()
{   int num1,num2;
    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    gcd(num1,num2);
}
void gcd(int num1,int num2)
{
    if (i<=num1)
    {
        if((num1%i==0)&&(num2%i==0)) hcf=i;
        i++;
        gcd(num1,num2);
    }
    else printf("HCF of %d and %d = %d",num1,num2,hcf);
}
