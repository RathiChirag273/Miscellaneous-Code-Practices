//45.	Write a C program to convert Decimal to Binary number system.
#include<stdio.h>
void dec_bin(long int);
void main()
{   long int num;
    printf("Enter the decimal number : ");
    scanf("%ld",&num);
    dec_bin(num);
}
void dec_bin(long int num)
{
    long int rem[50],i=0,length=0;
    while(num>0)
    {
        rem[i]=num%2;
        num=num/2;
        i++;
        length++;
    }
    printf("nBinary number : ");
    for(i=length-1;i>=0;i--)
        printf("%ld",rem[i]);
}
