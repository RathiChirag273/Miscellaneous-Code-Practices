//7.	Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
void main()
{   int i,n,sum=0;
    printf("enter number ");
    scanf("%d",&n);
    printf("sum of even numbers between 1-%d are = ",n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0) sum+=i;
    }
    printf("%d ",sum);
}
