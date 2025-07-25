//25.	Write a C program to find LCM of two numbers.
#include <stdio.h>
void main()
{   int num1,num2,hcf,lcm,i;
    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    for(i=1;i<=num1;i++)
    {
        if((num1%i==0)&&(num2%i==0)) hcf=i;
    }
    lcm=(num1*num2)/hcf;
    printf("lcm of %d and %d = %d",num1,num2,lcm);
}
