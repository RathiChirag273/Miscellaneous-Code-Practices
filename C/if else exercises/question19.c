//19.	Write a C program to find all roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
void main()
{   signed int a,b,c;float d,r1,r2;
    printf("enter A, B, C as follows\n\t\t\t\t AX²+BX+C=0\n");
    printf("A= ");
    scanf("%d",&a);
    printf("B= ");
    scanf("%d",&b);
    printf("C= ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if(d<0) printf("NO REAL ROOTS");
    else
    {
        if(d==0)
        {
            printf("roots are real and equal\n");
            r1=(-b)/(2*a);
            printf("root 1 = root 2 = %f",r1);
        }
        else
        {
            printf("roots are real and unequal\n");
            r1 = (-sqrtf(d) - b) / (2 * a);
            r2 = (sqrtf(d) - b) / (2 * a)
            printf("root 1 = %f\nroot 2 = %f", r1, r2);
        }
    }
}
