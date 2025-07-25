//9.	Write a C program to print multiplication table of any number.
#include<stdio.h>
void main()
{   int i,n;
    printf("enter number ");
    scanf("%d",&n);
    printf("the table is : \n");
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
}
