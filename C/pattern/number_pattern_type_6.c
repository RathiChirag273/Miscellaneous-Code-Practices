/* Number pattern 6

10101
01010
10101
01010
10101   */

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
           if(i%2==0)
           {
               if(j%2!=0) printf("1");
               else printf("0");
           }
           else
           {
               if(j%2!=0) printf("0");
               else printf("1");
           }
        }
        printf("\n");
    }
}
