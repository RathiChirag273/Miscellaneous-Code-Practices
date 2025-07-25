//17.	Write a C program to check whether a number is palindrome or not.
#include <stdio.h>
#include <math.h>
void main()
{   int n, dn, c=-1, i, j=10, ext, rev=0;
    printf("enter a number : ");
    scanf("%d",&n);
    dn=n;
    i=1;
    while(i<=n)
    {
        c++;i*=10;
    }
    i=c;
    while(i>=0)
    {
        ext=(dn%j);
        dn-=ext;
        dn/=10;
        rev+=ext*pow(10,i);
        i--;}
    if(rev==n) printf("the number is palindrome");
    else printf("the number is not palindrome");
}
