#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char a[10];int i,j,c=0;
    printf("enter number to check palindrome (10 digits max): ");
    gets(a);

    for(i=0,j=strlen(a)-1;i<=strlen(a)/2;i++,j--)
    {
       if(a[i]!=a[j])
       {c++; break;}
    }
    if(c==0) printf("number is palindrome");
    else printf("number is not palindrome");
    return 0;
}
