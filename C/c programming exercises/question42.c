//42.	Write a C program to convert Octal to Binary number system.
#include<stdio.h>
#include <math.h>
void oct_bin(long int);
void main()
{   long int num;
    printf("Enter the octal number : ");
    scanf("%ld",&num);
    oct_bin(num);
}
void oct_bin(long int num)
{   int dec=0,i=0;
    long bin=0;
    while (num!=0)
    {
        dec+=(num%10)*pow(8,i);
        ++i;
        num/=10;
    }
    i=1;
    while (dec!=0)
    {
        bin+=(dec%2)*i;
        dec/=2;
        i*=10;
    }
    printf("binary number : %d",bin);
}
