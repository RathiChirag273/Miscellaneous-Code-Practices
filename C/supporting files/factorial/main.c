#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,i; long int f=1;
    printf("enter number for factorial = ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    f*=i;
    printf("factorial %ld",f);
    return 0;
}
