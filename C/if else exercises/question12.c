//12.	Write a C program to input month number and print number of days in that month.
#include <stdio.h>
void main()
{   int m;
    printf("enter month number : ");
    scanf("%d",&m);
    if((m>12)||(m<1)) printf("invalid input ");
    else
    {
        switch(m)
        {
            case 1:printf("31");break;
            case 2:printf("28 (29 if leap year)");break;
            case 3:printf("31");break;
            case 4:printf("30");break;
            case 5:printf("31");break;
            case 6:printf("30");break;
            case 7:printf("31");break;
            case 8:printf("31");break;
            case 9:printf("30");break;
            case 10:printf("31");break;
            case 11:printf("30");break;
            case 12:printf("31");break;
        }
    }
}
