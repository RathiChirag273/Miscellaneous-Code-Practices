//17.	Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include <stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter sides of triangle\n");
    printf("enter SIDE 1 : ");
    scanf("%d", &s1);
    printf("enter SIDE 2 : ");
    scanf("%d", &s2);
    printf("enter SIDE 3 : ");
    scanf("%d", &s3);
    if(s1+s2>s3) printf("triangle is possible");
    else printf("triangle is not possible");
}
