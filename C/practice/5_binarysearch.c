#include <stdio.h>
void sort(int x[],int y)
{ int temp;
   for(int i=0;i<y;i++)
   {
     for(int j=i+1;j<y;j++)
     {
      if(x[i]>x[j])
      {
       temp=x[i];
       x[i]=x[j];
       x[j]=temp;
      }
     }
    }
    printf("The sorted array is : ");
   for(int i=0;i<y;i++) printf("\t%d",x[i]);
   bin_search(x,y);
}
void bin_search(int a[],int n)
{
  int s,f,l,m;
  printf("\nEnter value to find\n");
  scanf("%d",&s);
  f=0;
  l=n-1;
  m=(f+l)/2;

  while (f<=l) {
    if (a[m]<s)
      f=m+1;
    else if (a[m]==s) {
      printf("%d found at location %d.\n",s,m+1);
      break;
    }
    else
    l=m-1;

    m=(f+l)/2;
  }
  if (f>l)
    printf("Not found! %d isn't present in the list.\n",s);
}
void main()
{
  int c,n,a[100];

  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n",n);
  for(c=0;c<n;c++)
    scanf("%d",&a[c]);
sort(a,n);
}
