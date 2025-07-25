//28.	Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>
void main()
{   int ur,i,j,count=0,sum=0;
    printf(" Enter range for determining prime numbers \n upper limit : ");
    scanf("%d",&ur);
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
            if(count==0) sum+=i;
        }
        i++;
    }
    printf("SUM of prime numbers between 1-%d = %d",ur,sum);
}
