//14.	Write a C program to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
int ans=1,f_ans=0;
void even(int,int);
void odd(int,int);
void main()
{   int n,s;
    printf("1. even natural numbers \n 2. odd natural numbers \n");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
            printf("enter end number : ");
            scanf("%d",&n);
            printf("even number SUM : ");
            even(ans,n);
            break;
        case 2:
            printf("enter end number : ");
            scanf("%d",&n);
            printf("odd number SUM : ");
            odd(ans,n);
            break;
        default:printf("WRONG CHOICE!!");
    }
}

void even(int ans,int n)
{
    if(ans<=n)
    {   if(ans%2==0)
        {f_ans+=ans;
        ans+=2;
        even(ans,n);}
        else
        {
            ans++; even(ans,n);
        }
    }
    else printf("%d",f_ans);
}
void odd(int ans,int n)
{
    if(ans<=n)
    {   if(ans%2!=0)
        {f_ans+=ans;
            ans+=2;
            odd(ans,n);}
        else
        {
            ans++; odd(ans,n);
        }
    }
    else printf("%d",f_ans);
}
