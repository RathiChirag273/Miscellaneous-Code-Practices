//10. Write a program to merge two given sorted arrays.

#include<stdio.h>

void merge(int a[], int b[], int arr1, int arr2)
{
  int c[arr1+arr2];
  for (int i = 0; i < arr1; i++)
  {
    c[i] = a[i];
  }
  for (int i = 0; i < arr2; i++)
  {
    c[arr1+i] = b[i];
  }
  printf(" Merged array: \n");
  for (int i = 0; i < arr1+arr2; i++)
  {
    printf("\t%d", c[i]);
  }

}
void main()
{
  int arr1, arr2;
  printf(" Enter number of elements of array 1: ");
  scanf("%d", &arr1);
  int a[arr1];
  printf(" Enter elements: \n");
  for (int i = 0; i < arr1; i++)
  {
    scanf("%d", &a[i]);
  }
  printf(" Enter number of elements of array 2: ");
  scanf("%d", &arr2);
  int b[arr2];
  printf(" Enter elements: \n");
  for (int i = 0; i < arr2; i++)
  {
    scanf("%d", &b[i]);
  }
  merge(a, b, arr1, arr2);
}
