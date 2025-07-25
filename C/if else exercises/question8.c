//8.	Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
#include <ctype.h>
void main()
{   char a;
    printf("enter character : ");
    scanf("%c",&a);
    if (isalpha(a))
    {
        printf("%c is alphabet\n",a);
        if((a=='a')||(a=='A')||(a=='e')||(a=='E')||(a=='i')||(a=='I')||(a=='o')||(a=='O')||(a=='u')||(a=='U'))
        printf("its a vowel");
        else printf("its a consonant");
    }
    else printf("%c is not alphabet",a);
}
