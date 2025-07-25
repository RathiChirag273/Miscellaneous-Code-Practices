//27.	Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>
void main()
{   int ur,i,j,count=0;
    printf(" Enter range for determining prime numbers \n upper limit : ");
    scanf("%d",&ur);
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
