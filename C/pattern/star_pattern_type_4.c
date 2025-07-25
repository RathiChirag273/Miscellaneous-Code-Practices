/* Hollow Inverted Pyramid Star Pattern

*********
 *     *
  *   *
   * *
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
        {   if(i!=0)
            {
                if(j==n) printf("*");
                else printf(" ");
            }
            else printf("*");
        }

        for(j=n-1;j>i;j--)
        {   if(i!=0)
            {
                if (j==i+1) printf("*");
                else printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
}
