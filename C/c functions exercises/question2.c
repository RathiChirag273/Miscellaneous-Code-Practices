//2.	Write a C program to find diameter, circumference and area of circle using functions.
#include <stdio.h>
#include <math.h>
void area(float);
void circum(float);
void getd(void);
void main()
{   float r ;int a;
    printf("find : \n 1. area\n 2. circumference\n 3. diameter \n\t:");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("enter radius : ");
            scanf("%f",&r);area(r);break;
        case 2:
            printf("enter radius : ");
            scanf("%f",&r);circum(r);break;
        case 3:
            getd();break;
        default: printf("WRONG CHOICE!!");
    }
}
void area(float r)
{
    float area;
    area=3.14*r*r;
    printf("AREA of circle of radius %lf = %f",r,area);
}
void circum(float r)
{
    float c;
    c=2*3.14*r;
    printf("AREA of radius %lf = %f",r,c);
}
void getd()
{
    float d,num;int a;
    printf("get diameter through : \n 1. area \n 2. circumference \n\t:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("enter area : ");
            scanf("%f",&num);
            d=sqrtf(4*num*3.14);
            printf("Diameter = %f",d);
            break;
        case 2:
            printf("enter circumference : ");
            scanf("%f",&num);
            d=num/(2*3.14);
            printf("Diameter = %f",d);
            break;
        default:printf("WRONG CHOICE!!");
    }
}
