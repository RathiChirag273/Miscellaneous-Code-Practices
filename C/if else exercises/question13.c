//13.	Write a C program to count total number of notes in given amount.
#include <stdio.h>
void main()
{   int m,dm,count=0;
    printf("enter total amount : ");
    scanf("%d",&m);
    dm=m;
    if (dm>=2000)
    {
        count=dm/2000;
        printf("no. of notes of 2000 = %d",count);
    }
    dm=dm-(2000*count);
    if (dm>=500)
    {
        count=dm/500;
        printf("\nno. of notes of 500 = %d",count);
    }
    dm=dm-(500*count);
    if (dm>=200)
    {
        count=dm/200;
        printf("\nno. of notes of 200 = %d",count);
    }
    dm=dm-(200*count);
    if (dm>=100)
    {
        count=dm/100;
        printf("\nno. of notes of 100 = %d",count);
    }
    dm=dm-(100*count);
    if (dm>=50)
    {
        count=dm/50;
        printf("\nno. of notes of 50 = %d",count);
    }
    dm=dm-(50*count);
    if (dm>=20)
    {
        count=dm/20;
        printf("\nno. of notes of 20 = %d",count);
    }
    dm=dm-(20*count);
    if (dm>=10)
    {
        count=dm/10;
        printf("\nno. of notes of 10 = %d",count);
    }
    dm=dm-(10*count);
    if (dm>=5)
    {
        count=dm/5;
        printf("\nno. of coins of 5 = %d",count);
    }
    dm=dm-(5*count);
    if (dm>=2)
    {
        count=dm/2;
        printf("\nno. of coins of 2 = %d",count);
    }
    dm=dm-(2*count);
    if (dm>=1)
    {
        count=dm/1;
        printf("\nno. of coins of 1 = %d",count);
    }
    dm=dm-(1*count);
}
