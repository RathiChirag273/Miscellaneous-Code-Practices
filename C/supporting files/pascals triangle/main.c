#include <stdio.h>

long long fact(int n);

int main()
{
    int n=0, k, num, i;
    long long term;

    printf("Enter number of rows : ");
    scanf("%d", &num);

    while(n<num)
    {
        i=n;
        while(i<=num)
           {
             printf(" %3c", ' '); i++;
           }

        k=0;
        while(k<=n)
        {
            term = fact(n) / (fact(k) * fact(n-k));

            printf(" %6lld ", term);
       k++;}

        printf("\n");
    n++;}

    return 0;
}

long long fact(int n)
{
    long long factorial = 1;
    while(n>=1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}
