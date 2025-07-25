//13.	Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int ans=1,f_ans=0;
void natural(int,int);
void main()
{   int n;
    printf("enter number : ");
    scanf("%d",&n);
    printf("natural number SUM : ");
    natural(ans,n);
}

void natural(int ans,int n)
{
    if(ans<=n)
    {
        f_ans+=ans;
        ans++;
        natural(ans,n);
    }
    else printf("%d",f_ans);
}
