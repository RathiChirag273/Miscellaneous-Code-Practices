/* Number pattern 4

11111
10001
10001
10001
11111   */

#include <stdio.h>
void main()
{   int i,j,n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   if((i!=0)&&(i!=n-1))
            {
                if ((j!=0)&&(j!=n-1)) printf("0");
                else printf("1");
            }
            else printf("1");
        }
        printf("\n");
    }
}
