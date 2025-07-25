//7.	Write a C program to check whether a character is alphabet or not.
#include <stdio.h>
#include <ctype.h>
void main()
{   char n1;
    printf("enter character : ");
    scanf("%c",&n1);
    if (isalpha(n1)) printf("%c is alphabet",n1);
    else printf("%c is not alphabet",n1);
}
