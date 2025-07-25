//49.	Write a C program to convert Hexadecimal to Octal number system.
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
void hex_bin(char[]);
void bin_oct(long int);
void main()
{   char num[50];
    printf("Enter the hexadecimal number : ");
    gets(num);
    hex_bin(num);
}
void hex_bin(char num[])
{   long int i=0,j=0,d;
    char bin[80],*ptr;
    while (num[i]) {

        switch (num[i]) {
            case '0':
                bin[j]='0';
                bin[j+1]='0';
                bin[j+2]='0';
                bin[j+3]='0';
                break;
            case '1':
                bin[j]='0';
                bin[j+1]='0';
                bin[j+2]='0';
                bin[j+3]='1';
                break;
            case '2':
                bin[j]='0';
                bin[j+1]='0';
                bin[j+2]='1';
                bin[j+3]='0';
                break;
            case '3':
                bin[j]='0';
                bin[j+1]='0';
                bin[j+2]='1';
                bin[j+3]='1';
                break;
            case '4':
                bin[j]='0';
                bin[j+1]='1';
                bin[j+2]='0';
                bin[j+3]='0';
                break;
            case '5':
                bin[j]='0';
                bin[j+1]='1';
                bin[j+2]='0';
                bin[j+3]='1';
                break;
            case '6':
                bin[j]='0';
                bin[j+1]='1';
                bin[j+2]='1';
                bin[j+3]='0';
                break;
            case '7':
                bin[j]='0';
                bin[j+1]='1';
                bin[j+2]='1';
                bin[j+3]='1';
                break;
            case '8':
                bin[j]='1';
                bin[j+1]='0';
                bin[j+2]='0';
                bin[j+3]='0';
                break;
            case '9':
                bin[j]='1';
                bin[j+1]='0';
                bin[j+2]='0';
                bin[j+3]='1';
                break;
            case 'A':
            case 'a':
                bin[j]='1';
                bin[j+1]='0';
                bin[j+2]='1';
                bin[j+3]='0';
                break;
            case 'B':
            case 'b':
                bin[j]='1';
                bin[j+1]='0';
                bin[j+2]='1';
                bin[j+3]='1';
                break;
            case 'C':
            case 'c':
                bin[j]='1';
                bin[j+1]='1';
                bin[j+2]='0';
                bin[j+3]='0';
                break;
            case 'D':
            case 'd':
                bin[j]='1';
                bin[j+1]='1';
                bin[j+2]='0';
                bin[j+3]='1';
                break;
            case 'E':
            case 'e':
                bin[j]='1';
                bin[j+1]='1';
                bin[j+2]='1';
                bin[j+3]='0';
                break;
            case 'F':
            case 'f':
                bin[j]='1';
                bin[j+1]='1';
                bin[j+2]='1';
                bin[j+3]='1';
                break;
            default:
                printf("\nInvalid hexadecimal digit ");
        }
        i++;j+=4;
    }
    bin[j]='\0';
    d=strtol(bin,&ptr,10);
    bin_oct(d);
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
