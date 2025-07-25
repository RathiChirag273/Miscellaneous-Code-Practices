//16.	Write a C program to enter a number and print its reverse.
#include <stdio.h>
#include <math.h>
void main()
{   int n, dn, c=-1, i, j=10, ext, rev=0;
    printf("enter a number you want reverse of : ");
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
    printf("reversed number is : %d",rev);
}
