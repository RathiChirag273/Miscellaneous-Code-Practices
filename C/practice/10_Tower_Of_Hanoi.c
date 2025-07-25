#include <stdio.h>
#include<conio.h>
void TOH(int n, char begn, char end, char aux)
{
    if (n == 1)
    {
        printf("\n %c to %c", begn, end);
        return;
    }
    TOH(n-1, begn, aux, end);
    printf("\n %c to %c", begn, end);
    TOH(n-1, aux, end, begn);
}

int main()
{
    int n;
    printf("\nEnter number of disc ");
    scanf("%d",&n);
    char a = 'A', b = 'B', c = 'C';
    TOH(n,a,c,b);
    return 0;
}
