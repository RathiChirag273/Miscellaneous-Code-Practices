#include <stdio.h>
#include <stdlib.h>

int main()
{   int lr,ur,i,j,count=0;
    printf(" Enter range for determining prime numbers \n lower limit : ");
    scanf("%d",&lr);
    printf(" upper limit : ");
    scanf("%d",&ur);
    printf("prime numbers in given range : \n ")
    i=lr;
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
    i++;}

    return 0;
}
