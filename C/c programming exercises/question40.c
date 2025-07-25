//40.	Write a C program to convert Binary to Decimal number system.
#include<stdio.h>
#include<math.h>
void bin_dec(long int);
void main()
{   long int num;
    printf("Enter the Binary number (0 and 1): ");
    scanf("%ld",&num);
    bin_dec(num);
}
void bin_dec(long int num)
{   long int rem,sum=0,power=0;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem*pow(2,power);
        power++;
    }
    printf("Decimal number : %d",sum);
}
