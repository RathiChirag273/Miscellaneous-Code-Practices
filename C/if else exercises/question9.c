//9.	Write a C program to input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
#include <ctype.h>
void main()
{   char a;
    printf("enter character : ");
    scanf("%c",&a);
    if (isalpha(a)) printf("%c is alphabet",a);
    else if(isalnum(a)) printf("%c is number",a);
    else printf("%c is a special character",a);
}
