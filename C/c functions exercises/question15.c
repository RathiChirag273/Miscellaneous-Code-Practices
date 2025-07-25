//15.	Write a C program to find reverse of any number using recursion.
#include <stdio.h>
#include <string.h>
void rev(char[],int);
char r[10];int i=0,j;
void main()
{   char n[10];int a;
    printf("enter a number you want reverse of : ");
    gets(n);
    a=strlen(n);
    rev(n,a);
}
void rev(char n[], int a)
{
   if(a>=0)
    {
        r[i]=n[a];
        i++;a--;
        rev(n,a);
    }
    else
    {
        printf("reverse string is : ");
        for(j=0;j<i;j++) printf("%c",r[j]);
    }
}
