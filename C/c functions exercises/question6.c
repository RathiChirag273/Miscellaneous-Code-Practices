//6.	Write a C program to find all prime numbers between given interval using functions.
#include <stdio.h>
void give_prime(int);
void main()
{
    int a;
    printf("enter upper limit : ");
    scanf("%d",&a);
    give_prime(a);
}
void give_prime(int ur)
{
    int i,j,count=0;
    printf("prime numbers between 1-%d : ",ur);
    i=1;
    while(i<=ur)
    {
        if((i!=0)&&(i!=1))
        {   j=2;
            while(j<i)
            {
                if(i%j!=0)count=0;
                else {count=1;break;}
                j++;
            }
            if(count==0) printf("%d ",i);
        }
        i++;
    }
}
