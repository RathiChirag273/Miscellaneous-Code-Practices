//32.	Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
void main()
{   int n,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0)
            sum=sum+i;
        i++;
    }
    if(sum==n)
        printf("%d is a perfect number",i);
    else
        printf("%d is not a perfect number",i);
}
