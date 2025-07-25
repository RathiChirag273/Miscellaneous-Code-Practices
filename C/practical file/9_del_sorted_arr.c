//9. Write a program to delete an element from given sorted array.

#include<stdio.h>
#define size 100
int arr[size];

void printarray(int num)
{
  printf(" Array after deletion: ");
  for (int i = 0; i < num; i++)
  {
    printf("\t%d", arr[i]);
  }
}

void deletion(int num)
{
  int pos;
  printf("\nEnter position of element to be deleted ");
  scanf("%d",&pos);
  for(int i=pos-1;i<num;i++)
  {
    arr[i]=arr[i+1];
  }
}

void main()
{
  printf(" Enter number of elements: ");
  int num, pos;
  scanf("%d", &num);
  printf(" Enter elements: \n");
  for (int i = 0; i < num; i++)
  {
     scanf("%d", &arr[i]);
  }
  deletion(num);
  num-=1;
  printarray(num);
}
