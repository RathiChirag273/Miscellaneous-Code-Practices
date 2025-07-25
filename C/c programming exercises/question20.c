//20.	Write a C program to print all ASCII character with their values.
#include <stdio.h>
void main()
{    int i;
    printf("All the ASCII :\n");
    for(i=0;i<=255;i++)
    {
       printf("%d = %c\n",i,i);
    }
}
