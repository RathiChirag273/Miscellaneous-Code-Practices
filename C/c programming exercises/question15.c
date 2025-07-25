//15.	Write a C program to calculate product of digits of a number.
#include<stdio.h>
#include <math.h>
void main()
{  int i,n,dnum,mult=1,count=0;
   printf("enter number : ");
   scanf("%d",&n);
   dnum=n;
   for(i=1;i<=n;i*=10) count++;
   for(i=1;i<=count;i++)
   {
       mult*=dnum%10;
       dnum/=10;
   }
   printf("multiplication of digits = %d",mult);
}
