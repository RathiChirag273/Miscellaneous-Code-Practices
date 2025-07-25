//43.	Write a C program to convert Octal to Decimal number system.
#include<stdio.h>
#include <math.h>
void oct_dec(long int);
void main()
{   long int num;
    printf("Enter the octal number : ");
    scanf("%ld",&num);
    oct_dec(num);
}
void oct_dec(long int num)
{   long int dec=0; int i=0;
    while(num!=0)
    {
        dec+=(num%10)*pow(8,i);
        ++i;
        num/=10;
    }
    i=1;
    printf("decimal number = %ld", dec);
}
