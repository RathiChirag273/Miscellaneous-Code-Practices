//5.	Write a C program to check whether a number is Prime, Armstrong or perfect number using functions.
#include <stdio.h>
int power(int x,int y)
{
  int res=1;
  for(int i=0;i<y;i++) res*=x;
  return res;
}
void check_prime(int);
void check_armstrong(int);
void check_perfect(int);
void main()
{
    int a,b;
    printf("enter number : ");
    scanf("%d",&a);
    printf("check for :\n 1. prime \n 2. armstrong \n 3. perfect \n");
    scanf("%d",&b);
    switch(b)
    {
        case 1:check_prime(a);break;
        case 2:check_armstrong(a);break;
        case 3:check_perfect(a);break;
        default:printf("WRONG CHOICE!!");
    }
}

void check_prime(int n)
{
    int i,count=0;
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
void check_armstrong(int n)
{
    int i,c=0,r,j,result=0;
    j=n;
    for(i=1;i<=n;i*=10) c++;
    for(j=n;j>0;j/=10)
    {
        r=j%10; result+=power(r,c);
    }
    if(result==n) printf("number is armstrong");
    else printf("number is not armstrong");
}

void check_perfect(int n)
{
    int i=1,sum=0;
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
