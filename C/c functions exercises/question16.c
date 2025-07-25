//16.	Write a C program to check whether a number is palindrome or not using recursion.
#include <stdio.h>
#include <math.h>
void checkpd(int);
int n, dn, c=-1, i=1, j=10, ext, rev=0;
void main()
{
    printf("enter a number : ");
    scanf("%d", &n);
    dn=n;
    while(i<=n)
    {
        c++;
        i*=10;
    }
    i=c;
    checkpd(n);
}
void checkpd(int a)
{
    if(i>=0)
    {   dn=a;
        ext=(dn%j);
        dn-=ext;
        dn/=10;
        rev+=ext*pow(10,i);
        i--;
        checkpd(dn);
    }
    else
    {
        if (rev==n) printf("the number is palindrome");
        else printf("the number is not palindrome");
    }
}
