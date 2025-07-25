#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,i,n[2]; long int f=0;
    printf("enter a number for fibonacci = ");
    scanf("%d",&a);
    n[0]=0; n[1]=1;
    printf("0 1 ");
    i=2;
    while(i<a)
    {
        f=n[0]+n[1];
        n[0]=n[1];
        n[1]=f;
        printf("%ld ",f);
    i++;}
    printf("\nfibonacci = %ld",f);
    return 0;
}
