/* Square number patterns 1

11111
11111
11111
11111
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
        {
            printf("1");
        }
        printf("\n");
    }
}
