#include <stdio.h>
#include <stdlib.h>

int main()
{   int s,i,j,n;
    printf("enter number of rows : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=n;
        while(s>=i)
        {
            printf("   ");s--;
        }
        j=1;
        while(j<=i)
        {
            printf("%3d",j);j++;
        }
        j=i-1;
        while(j>=1)
        {
            printf("%3d",j);j--;
        }
        printf("\n");
    i++;}
    return 0;
}
