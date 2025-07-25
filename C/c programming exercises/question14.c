//14.	Write a C program to calculate sum of digits of a number.
#include<stdio.h>
void main()
{  int i,n,dnum,sum=0,count=0;
   printf("enter number : ");
   scanf("%d",&n);
   dnum=n;
   for(i=1;i<=n;i*=10) count++;
   for(i=1;i<=count;i++)
   {
       sum+=dnum%10;
       dnum/=10;
   }
   printf("SUM of digits = %d",sum);
}
