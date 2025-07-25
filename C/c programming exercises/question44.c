//44.	Write a C program to convert Octal to Hexadecimal number system.
#include<stdio.h>
#include <math.h>
#include <string.h>
void oct_bin(long int);
void bin_hex(long int);
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
    bin_hex(bin);
}
void bin_hex(long int num)
{   int hexc[]={0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    int index,i,digit;
    char hex[20];
    long int temp;
    temp=num;
    index=0;
    while(temp!=0)
    {
        digit=temp%10000;
        for(i=0;i<16;i++)
        {
            if(hexc[i]==digit)
            {
                if(i<10) hex[index]=(char)(i+48);
                else hex[index]=(char)((i-10)+65);
                index++;
                break;
            }
        }
        temp/=10000;
    }
    hex[index]='\0';
    strrev(hex);
    printf("Hexadecimal number = %s", hex);
}
