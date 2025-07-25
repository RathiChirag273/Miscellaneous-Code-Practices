#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, y, w, d, l;
    printf("program to convert no. of days into its constituents.");
    printf("\nenter the number");scanf("%d",&n);
    y=n/365;
    w=(n%365)/7;
    d=(n%365)%7;
    if(y>=4)
    {l=y/4; d=d-l;
     while(d<0)
    {w--; d=7+d;}
    }

    printf("The desired output is \n");
    printf("years= ");printf("%d",y);
    printf("\nweeks= ");printf("%d",w);
    printf("\ndays= ");printf("%d",d);

    return 0;

}
