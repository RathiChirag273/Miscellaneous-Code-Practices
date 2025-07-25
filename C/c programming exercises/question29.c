//29.	Write a C program to find all prime factors of a number.
#include<stdio.h>
int primefactor(int,int);
void main()
{   int n,dn,i,j,count=0;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("prime factors of %d = ",n);
    dn=n;
    i=1;
    while(i<=dn)
    {
        if((i!=0)&&(i!=1))
        {   j=2;
            while(j<i)
            {
                if(i%j!=0)count=0;
                else {count=1;break;}
                j++;
            }
            if((count==0)&&(i!=1)) dn=primefactor(i,dn);
        }
        i++;
    }
}

int primefactor(int p,int n)
{
    while(n%p==0)
    {  if(n/p==1)printf("%d ",p);
       else printf("%dx",p);
       n/=p;
    }
    return (n);
}
