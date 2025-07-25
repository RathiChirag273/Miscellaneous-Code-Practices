//26.	Write a C program to check whether a number is Prime number or not.
#include <stdio.h>
void main()
{   int n,i,count=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            count++;break;
        }
    }
    if(count==0) printf("%d is prime number ",n);
    else printf("%d is not prime number ",n);
}
