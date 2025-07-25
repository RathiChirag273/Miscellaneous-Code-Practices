//11.	Write a C program to input week number and print week day.
#include <stdio.h>
void main()
{   int m;
    printf("enter week number(1-7) : ");
    scanf("%d",&m);
    if((m>7)||(m<1)) printf("invalid input ");
    else
    {
        switch(m)
        {
            case 1:printf("Monday");break;
            case 2:printf("Tuesday");break;
            case 3:printf("Wednesday");break;
            case 4:printf("Thursday");break;
            case 5:printf("Friday");break;
            case 6:printf("Saturday");break;
            case 7:printf("Sunday");break;
        }
    }
}
