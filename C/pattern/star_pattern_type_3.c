/* Inverted Pyramid Star Pattern

*********
 *******
  *****
   ***
    *       */

#include <stdio.h>
void main()
{   int i,j,n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=n;j>i;j--)
        {
            printf("*");
        }

        for(j=n-1;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
