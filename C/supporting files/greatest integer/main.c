#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
    printf("enter 3 numbers = ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b)
    {if (a>c) printf("greatest = %d",a);
    else printf("greatest = %d",c);
    }
    else {if(b>c)printf("greatest = %d",b);
    else printf("greatest = %d",c);
    }
    return 0;
}
