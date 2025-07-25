/*21.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:

Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40%  : Grade F    */

#include <stdio.h>
void main()
{   float s1,per=0;
    printf("enter marks out of 100\n");
    printf("physics = ");
    scanf("%f",&s1);
    per+=s1;
    printf("chemistry = ");
    scanf("%f",&s1);
    per+=s1;
    printf("maths = ");
    scanf("%f",&s1);
    per+=s1;
    printf("biology = ");
    scanf("%f",&s1);
    per+=s1;
    printf("computer = ");
    scanf("%f",&s1);
    per+=s1;
    per/=5;
    if(per>=90) printf("percentage = %f\ngrade = A",per);
    else if(per>=80) printf("percentage = %f\ngrade = B",per);
    else if(per>=70) printf("percentage = %f\ngrade = C",per);
    else if(per>=60) printf("percentage = %f\ngrade = D",per);
    else if(per>=40) printf("percentage = %f\ngrade = E",per);
    else printf("percentage = %f\ngrade = F",per);
}
