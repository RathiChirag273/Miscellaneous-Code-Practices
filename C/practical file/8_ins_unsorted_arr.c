//8. Write a program to insert a new element in the given unsorted array at kth position.

#include<stdio.h>
#define size 100
int arr[size];

void insert(int ele, int pos, int num)
{
  for(int i = num; i >= pos-1; i--)
  {
    arr[i] = arr[i-1];
  }
  arr[pos-1] = ele;
}
void printarray(int num)
{
  printf(" Array after insertion: ");
  for (int i = 0; i < num; i++)
  {
    printf("\t%d", arr[i]);
  }
}
void main()
{
  printf(" Enter number of elements: ");
  int ele, num, pos;
  scanf("%d", &num);
  printf(" Enter elements: \n");
  for (int i = 0; i < num; i++)
  {
     scanf("%d", &arr[i]);
  }
  printf(" Enter element to be inserted: ");
  scanf("%d", &ele);
  printf(" Enter position: ");
  scanf("%d", &pos);
  insert(ele, pos, num);
  num+=1;
  printarray(num);
}
