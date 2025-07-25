#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Output (bitwise and)= %d", a&b);

    printf("\nOutput (bitwise or)= %d", a|b);
    return 0;
}
