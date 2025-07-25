#include <stdio.h>
int fun(int);
void main()
{
    int a =30;
    printf("%d\n",&a);
    fun(a);
    printf("%d\n",&a);
}
int fun(int b)
{
    b=60;
    return b;
}