//19.	Write a C program to generate nth Fibonacci term using recursion.
#include <stdio.h>
void fibo(int);
int i=2,n[2]; long int f=0;
void main()
{   int a;
    printf("enter a number for fibonacci = ");
    scanf("%d",&a);
    n[0]=0; n[1]=1;
    printf("0 1 ");
    fibo(a);
}
void fibo(int a)
{
    if(i<a)
    {
        f=n[0]+n[1];
        n[0]=n[1];
        n[1]=f;
        printf("%ld ",f);
        i++;
        fibo(a);
    }
    else printf("\nfibonacci = %ld",f);
}
