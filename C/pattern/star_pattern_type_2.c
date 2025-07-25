/* Hollow Pyramid Star Pattern
    *
   * *
  *   *
 *     *
*********   */

#include <stdio.h>
void main()
{   int i,j,n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i!=n-1)
            {
                if(j==0) printf("*");
                else printf(" ");
            }
            else printf("*");
        }

        for(j=i;j>0;j--)
        {
            if(i!=n-1)
            {
                if (j == 1) printf("*");
                else printf(" ");
            }
            else printf("*");
        }
        printf("\n");
    }
}
