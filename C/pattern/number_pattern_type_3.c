/* Number pattern 3

01010
01010
01010
01010
01010   */

#include <stdio.h>
void main()
{   int i,j,n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j%2!=0) printf("1");
            else printf("0");
        }
        printf("\n");
    }
}
