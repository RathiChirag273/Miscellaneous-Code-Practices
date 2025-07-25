//9.	Write a C program to print all perfect numbers between given interval using functions.
#include<stdio.h>
void get_perfect(int);
void main()
{   int num;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("perfect numbers between 1-%d : ",num);
    get_perfect(num);
}

void get_perfect(int num)
{
    int n,i,sum;
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
