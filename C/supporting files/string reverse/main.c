#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int n,i,j;
    char a[10],temp;
    printf("enter a string of maximum 10 numbers = ");
    gets(a);
    n=strlen(a);
    for(i=0,j=n-1;i<n/2;i++,j--)
    { temp=a[i];a[i]=a[j];a[j]=temp;
    }
    printf("the reversed string is= ");
    puts(a);
    return 0;
}
