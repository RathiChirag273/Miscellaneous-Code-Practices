//10.	Write a C program to find power of any number using recursion.
#include<stdio.h>
int ans=1;
void Pow(int,int);
void main()
{   int base,power;
    printf("enter BASE : ");
    scanf("%d",&base);
    printf("enter POWER : ");
    scanf("%d",&power);
    Pow(base,power);
    printf("%d raised to %d = %d ",base,power,ans);
}

void Pow(int base,int power)
{
    if(power!=0)
    {
        ans*=base;
        power--;
        Pow(base,power);
    }
}
