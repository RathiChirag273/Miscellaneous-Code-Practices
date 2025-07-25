//10.	Write a C program to count number of digits in a number.
#include<stdio.h>
void main()
{   int i,n,count=0;
    printf("enter number ");
    scanf("%d",&n);
    printf("number of digit in %d = ",n);
    for(i=1;i<=n;i*=10)
    {
        count++;
    }
    printf("%d",count);
}
