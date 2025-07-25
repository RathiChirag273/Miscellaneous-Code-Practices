//21.	Write a C program to find LCM of two numbers using recursion.
#include <stdio.h>
void get_lcm(int,int);
int hcf,lcm,i=1;
void main()
{   int num1,num2;
    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    get_lcm(num1,num2);
}
void get_lcm(int num1,int num2)
{
    if(i<=num1)
    {
        if((num1%i==0)&&(num2%i==0)) hcf=i;
        i++;
        get_lcm(num1,num2);
    }
    else
    {
        lcm=(num1*num2)/hcf;
        printf("lcm of %d and %d = %d",num1,num2,lcm);
    }
}
