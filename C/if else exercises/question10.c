//10.	Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
#include <ctype.h>
void main()
{   char a;
    printf("enter character : ");
    scanf("%c",&a);
    if (isalpha(a))
    {
        if(isupper(a)) printf("%c is UPPER CASE",a);
        else printf("%c is lower case",a);
    }
}
