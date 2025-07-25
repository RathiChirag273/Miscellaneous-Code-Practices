//11.	Write a C program to print all natural numbers between 1 to n using recursion.
#include<stdio.h>
int ans=1;
void natural(int,int);
void main()
{   int n;
    printf("enter number : ");
    scanf("%d",&n);
    printf("natural number : \n");
    natural(ans,n);
}

void natural(int ans,int n)
{
    if(ans<=n)
    {
        printf("%d  ",ans);
        ans++;
        natural(ans,n);
    }
}
