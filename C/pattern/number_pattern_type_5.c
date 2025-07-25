/* Number pattern 5

11111
11111
11011
11111
11111   */

#include <stdio.h>
void main()
{   int i,j,n;
    printf("enter odd number of rows : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==(n/2))&&(j==(n/2))) printf("0");
            else printf("1");
        }
        printf("\n");
    }
}
