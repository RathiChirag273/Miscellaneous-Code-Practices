#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int i,n,c=0,r,j,result=0;
    printf("enter number to check armstrong number : \n");
    scanf("%d",&n);
    j=n;
    for(i=1;i<=n;i*=10) c++;
    for(j=n;j>0;j/=10)
    {
       r=j%10; result+=pow(r,c);
    }
    if(result==n) printf("number is armstrong");
    else printf("number is not armstrong");
    return 0;
}
