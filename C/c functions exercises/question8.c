//8.	Write a C program to print all Armstrong numbers between given interval using functions.
#include<stdio.h>
#include <math.h>
void get_armstrong(int);
void main()
{   int num;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("armstrong numbers between 1-%d : ",num);
    get_armstrong(num);
}

void get_armstrong(int high)
{
    int i, originalNumber, rem, count = 0;
    double result = 0.0;
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
