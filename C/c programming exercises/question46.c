//46.	Write a C program to convert Decimal to Octal number system.
#include<stdio.h>
void dec_oct(long int);
void main()
{   long int num;
    printf("Enter the decimal number : ");
    scanf("%ld",&num);
    dec_oct(num);
}
void dec_oct(long int num)
{
    long int rem[50],i=0,length=0;
    while(num>0)
    {
        rem[i]=num%8;
        num=num/8;
        i++;
        length++;
    }
    printf("Octal number : ");
    for(i=length-1;i>=0;i--)
        printf("%ld",rem[i]);
}
