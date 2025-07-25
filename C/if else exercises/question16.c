//16.	Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include <stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter angles of triangle\n");
    printf("enter ANGLE 1 : ");
    scanf("%d", &s1);
    printf("enter ANGLE 2 : ");
    scanf("%d", &s2);
    printf("enter ANGLE 3 : ");
    scanf("%d", &s3);
    if(s1+s2+s3==180) printf("triangle is possible");
    else printf("triangle is not possible");
}
