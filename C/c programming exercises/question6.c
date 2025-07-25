//6.	Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
void main()
{   int i,n,sum=0;
    printf("Enter number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("SUM = %d",sum);
}
