#include<stdio.h>
int n = 1;
long int fact = 1;
void factorial(int x)
{
  if(n <= x)
  {
    fact = fact * n;
    n++;
    factorial(x);
  }
}

void main()
{
  int f;
  printf("\n\tEnter a number for factorial ");
  scanf("%d",&f);
  factorial(f);
  printf("\n\tThe factorial of %d is %ld",f,fact);
}
