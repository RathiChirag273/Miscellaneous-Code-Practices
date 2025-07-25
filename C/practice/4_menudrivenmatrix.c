#include<stdio.h>
#include<stdlib.h>
int r,c;
/*int digit(int y[r][c])
{
  int lnum=0,count=0;
   for(int i=0;i<r;i++)
   for(int j=0;j<c;j++)
   {
     if(y[i][j]>lnum) lnum=y[i][j];
   }
   for(int i=lnum;i>=1;i/=10) count++;
   return count;
}*/
void disp(int x[r][c])
{
  //int count=digit(x);
  for(int i=0;i<r;i++)
{ for(int j=0;j<c;j++)
  {
    printf("%d\t|",x[i][j]);
  }
  printf("\n");
}
}
void sub()
{
  printf("\n SUBTRACTION OF 2 MATRIX IS POSSIBLE ONLY IF BOTH THE MATRIX ARE OF SAME DIMENSION ");
  printf("\nEnter dimension of matrix");
  printf("\nEnter number of rows ");
  scanf("%d",&r);
    printf("Enter number of columns ");
  scanf("%d",&c);
  int a[r][c],b[r][c],ans[r][c];
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
    printf("A[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
  }
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
    printf("B[%d][%d] = ",i,j);
    scanf("%d",&b[i][j]);
  }
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
    ans[i][j]=a[i][j]-b[i][j];
  }
  disp(ans);
}
void mul()
{ int r1,c1,r2,c2;
  printf("\n MULTIPLICATION OF 2 MATRIX IS POSSIBLE ONLY IF COLUMN OF 1ST AND ROW OF 2ND MATRIX ARE SAME ");
  printf("\nEnter dimension of 1st matrix");
  printf("\nEnter number of rows ");
  scanf("%d",&r1);
    printf("Enter number of columns ");
  scanf("%d",&c1);
  printf("\nEnter dimension of 2nd matrix");
  printf("\nEnter number of rows ");
  scanf("%d",&r2);
    printf("Enter number of columns ");
  scanf("%d",&c2);
if(c2==r1)
{
  int a[r1][c1],b[r2][c2];
  r=r1;c=c2;
  int ans[r][c],temp=0;
  for(int i=0;i<r1;i++)
  for(int j=0;j<c1;j++)
  {
    printf("A[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
  }
  for(int i=0;i<r2;i++)
  for(int j=0;j<c2;j++)
  {
    printf("B[%d][%d] = ",i,j);
    scanf("%d",&b[i][j]);
  }
  for(int i=0;i<r;i++)
  {for(int k=0;k<c;k++)
   {for(int j=0;j<r2;j++)
    {
      temp+=a[i][j]*b[j][k];
    }
    ans[i][k]=temp;temp=0;
   }
  }
  disp(ans);
}
else printf("\n\t\t\t\tIMPROPER DIMENSIONS TRY AGAIN");
}
void add()
{
  printf("\n ADDITION OF 2 MATRIX IS POSSIBLE ONLY IF BOTH THE MATRIX ARE OF SAME DIMENSION ");
  printf("\nEnter dimension of matrix");
  printf("\nEnter number of rows ");
  scanf("%d",&r);
    printf("Enter number of columns ");
  scanf("%d",&c);
  int a[r][c],b[r][c],ans[r][c];
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
    printf("A[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
  }
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
    printf("B[%d][%d] = ",i,j);
    scanf("%d",&b[i][j]);
  }
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
  {
    ans[i][j]=a[i][j]+b[i][j];
  }
  disp(ans);
}
int main()
{ start:
  system("cls");
  printf("\t\t\tThis is program to perform following tasks\n 1. sum of 2 matrix\n 2. subtraction of 2 matrix\n 3. multiplication of 2 matrix\n 4.exit\n");
  printf("Enter your choice ");
  int n;char ch='y';
  scanf("%d",&n);
  while(n)
  {
  switch(n)
  {
    case 1: system("cls");add();break;
    case 2: system("cls");sub();break;
    case 3: system("cls");mul();break;
    case 4:goto end;break;
    default : system("cls");printf("\t\t\tWRONG CHOICE\n");
  }
  getch();
  if(ch=='y')goto start;
}
end:
system("cls");
printf("\n\t\t\tEnd of program");
  return 0;
}
