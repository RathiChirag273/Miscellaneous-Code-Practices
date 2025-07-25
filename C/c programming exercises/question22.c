//22.	Write a C program to find all factors of a number.
#include <stdio.h>
void main()
{   int num,i;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("factors of %d : ",num);
    for(i=1;i<=num;i++)
    {   if(i==num) printf("%d",i);
        else if(num%i==0) printf("%d, ",i);
    }
}
