//4.	Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
void main()
{   int n1;
    printf("enter number : ");
    scanf("%d",&n1);
    if((n1%5==0)&&(n1%11==0)) printf("%d is divisible by both 5 and 11",n1);
    else if(n1%5==0) printf("%d is divisible by 5",n1);
    else if(n1%11==0) printf("%d is divisible by 11",n1);
}
