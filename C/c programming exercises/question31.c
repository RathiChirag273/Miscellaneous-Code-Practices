//31.	Write a C program to print all Armstrong numbers between 1 to n.
#include <math.h>
#include <stdio.h>
void main()
{   int high, i, originalNumber, rem, count = 0;
    double result = 0.0;
    printf("Enter a number : ");
    scanf("%d", &high);
    printf("Armstrong numbers between 1-%d are: ", high);
    for (i=1;i<high;i++) {
        originalNumber=i;
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++count;
        }
        originalNumber=i;
        while (originalNumber != 0) {
            rem = originalNumber % 10;
            result += pow(rem, count);
            originalNumber /= 10;
        }
        if ((int)result == i) {
            printf("%d ", i);
        }
        count = 0;
        result = 0;
    }
}
