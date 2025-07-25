//17.	Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
void dsum(int);
int i=1,j=1,n,dnum,sum=0,count=0;
void main()
{
    printf("enter number : ");
    scanf("%d",&n);
    dnum=n;
    for(i=1;i<=n;i*=10) count++;
    dsum(n);
}
void dsum(int a)
{   dnum=a;
    if(j<=count)
    {
        sum+=dnum%10;
        dnum/=10;
        j++;
        dsum(dnum);
    }
    else printf("SUM of digits = %d",sum);
}
