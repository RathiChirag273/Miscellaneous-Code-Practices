//13.	Write a C program to swap first and last digits of a number.
#include<stdio.h>
int power(int x,int y)
{
  int res=1;
  for(int i=0;i<y;i++) res*=x;
  return res;
}
void main()
{   int i,n,count=0,fnum,lnum,mnum;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i*=10) count++;
    fnum=n/power(10,--count);
    lnum=n%10;
    mnum=(n-lnum)-(fnum*power(10,count));
    lnum=lnum*power(10,count);
    n=lnum+mnum+fnum;
    printf("new number is : %d",n);
}
