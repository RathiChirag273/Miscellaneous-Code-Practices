//20.	Write a C program to calculate profit or loss.
#include <stdio.h>
void main()
{   float earn, spend, check;
    printf("enter total earning : ");
    scanf(" %f",&earn);
    printf("enter total expenditure : ");
    scanf(" %f",&spend);
    check=earn-spend;
    if(check==0) printf("neither profit not loss");
    if(check>0)
    {
        check=((earn-spend)*100)/earn;
        printf("Profit = %f percent",check);
    }
    else
    {
        check=((spend-earn)*100)/earn;
        printf("Loss = %f percent",check);
    }
}
