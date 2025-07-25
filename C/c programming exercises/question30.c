//30.	Write a C program to check whether a number is Armstrong number or not.
#include <stdio.h>
int power(int x,int y)
{
  int res=1;
  for(int i=0;i<y;i++) res*=x;
  return res;
}
void main()
{   int i,n,c=0,r,j,result=0;
    printf("enter number to check armstrong number : ");
    scanf("%d",&n);
    j=n;
    for(i=1;i<=n;i*=10) c++;
    for(j=n;j>0;j/=10)
    {
       r=j%10; result+=power(r,c);
    }
    if(result==n) printf("number is armstrong");
    else printf("number is not armstrong");
}
