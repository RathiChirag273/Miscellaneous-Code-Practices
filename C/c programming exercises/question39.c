//39.	Write a C program to convert Binary to Octal number system.
#include<stdio.h>
#include <math.h>
void bin_oct(long int);
void main()
{   long int num;
    printf("Enter the Binary number (0 and 1): ");
    scanf("%ld",&num);
    bin_oct(num);
}
void bin_oct(long int num)
{   int oct=0,dec=0,i=0;
    while (num!=0)
    {
        dec+=(num%10)*pow(2, i);
        ++i;
        num/=10;
    }
    i = 1;
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("Octal number : %d",oct);
}
