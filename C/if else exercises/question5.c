//5.	Write a C program to check whether a number is even or odd.
#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    printf("enter a number to check even odd : ");
    scanf("%d",&n);
    if(n%2==0) printf("the number is even");
    else printf("the number is odd");
    return 0;
}
