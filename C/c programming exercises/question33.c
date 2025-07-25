//33.	Write a C program to print all Perfect numbers between 1 to n.
#include<stdio.h>
void main()
{   int n,i,sum,num;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("Perfect numbers are: ");
    for(n=1;n<=num;n++){
        i=1;
        sum = 0;
        while(i<n){
            if(n%i==0)
                sum=sum+i;
            i++;
        }
        if(sum==n)
            printf("%d ",n);
    }
}
