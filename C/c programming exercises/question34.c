//34.	Write a C program to check whether a number is Strong number or not.
#include<stdio.h>
int getfact(int);
void main()
{   int num,dnum,i,store,count=0,ext=0;
    printf("enter a number : ");
    scanf("%d",&num);
    dnum=num;
    for(i=1;i<=num;i*=10) count++;
    for(i=1;i<=count;i++)
    {
        store=dnum%10;
        store=getfact(store);
        dnum/=10;
        ext+=store;
    }
    if(ext==num) printf("%d is strong number.",num);
    else printf("%d is not strong number.",num);
}

int getfact(int n)
{   int fact=1;
    for(int i=1;i<=n;i++) fact*=i;
    return fact;
}
