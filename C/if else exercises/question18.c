//18.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <stdio.h>
void main()
{   int s1,s2,s3,c;
    printf("choose : \n 1.enter sides\n 2.enter angles\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            printf("enter sides of triangle\n");
            printf("enter SIDE 1 : ");
            scanf("%d", &s1);
            printf("enter SIDE 2 : ");
            scanf("%d", &s2);
            printf("enter SIDE 3 : ");
            scanf("%d", &s3);
            if(s1+s2>s3){
            if((s1==s2)&&(s2==s3)) printf("EQUILATERAL TRIANGLE");
            else if ((s1==s2)||(s2==s3)||(s1==s3)) printf("ISOSCELES TRIANGLE");
            else printf("SCALENE TRIANGLE");}
            else printf("triangle is not possible");
            break;
        case 2:
            printf("enter angles of triangle\n");
            printf("enter ANGLE 1 : ");
            scanf("%d", &s1);
            printf("enter ANGLE 2 : ");
            scanf("%d", &s2);
            printf("enter ANGLE 3 : ");
            scanf("%d", &s3);
            if(s1+s2+s3==180) {
            if((s1==s2)&&(s2==s3)) printf("EQUILATERAL TRIANGLE");
            else if ((s1==s2)||(s2==s3)||(s1==s3)) printf("ISOSCELES TRIANGLE");
            else printf("SCALENE TRIANGLE");}
            else printf("triangle is not possible");
            break;
        default:printf("WRONG CHOICE");
    }
}
