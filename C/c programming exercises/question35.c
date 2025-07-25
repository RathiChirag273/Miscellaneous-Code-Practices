//35.	Write a C program to print all Strong numbers between 1 to n.
#include<stdio.h>
int getfact(int);
void isstrong(int);
void main()
{   int num;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("strong numbers between 1-%d :\n\t",num);
    for(int i=1;i<=num;i++)
    {
       isstrong(i);
    }
}

void isstrong(int num)
{   int dnum,i,store,count=0,ext=0;
    dnum=num;
    for(i=1;i<=num;i*=10) count++;
    for(i=1;i<=count;i++)
    {
        store=dnum%10;
        store=getfact(store);
        dnum/=10;
        ext+=store;
    }
    if(ext==num) printf("%d  ",ext);
}
int getfact(int n)
{   int fact=1;
    for(int i=1;i<=n;i++) fact*=i;
    return fact;
}
