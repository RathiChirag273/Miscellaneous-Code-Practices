#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
void even_od()
{
  int n;
      printf("enter a number to check even odd : ");
      scanf("%d",&n);
      if(n%2==0) printf("the number is even");
      else printf("the number is odd");
}
void prime_notprime()
{
  int n,count=0;
  printf("Enter a number to check for prime  ");
  scanf("%d",&n);
  if((n==1)||(n==0))printf("\nWrong input \nEnter number greater than 2");
  else
{  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0){count=1; break;}
  }
  if (count==0) printf("The number is Prime");
  else printf("The number is not Prime");
}
}
void factorial()
{
  int a,i; long int f=1;
     printf("enter number for factorial = ");
     scanf("%d",&a);
     for(i=1;i<=a;i++)
     f*=i;
     printf("factorial %ld",f);
}
void fibonacci()
{
  int a,i,n[2]; long int f=0;
      printf("enter a number for fibonacci = ");
      scanf("%d",&a);
      n[0]=0; n[1]=1;
      printf("0 1 ");
      i=2;
      while(i<a)
      {
          f=n[0]+n[1];
          n[0]=n[1];
          n[1]=f;
          printf("%ld ",f);
      i++;}
      printf("\nfibonacci = %ld",f);
}
void table_of_entered_number()
{
  int n;
  printf("Enter a number to obtain table of  ");
  scanf("%d",&n);
  for(int i=1;i<=10;i++)
  {
    printf("\t\t%d X %d = %d\n",n,i,n*i);
  }
}
void armstrong_number()
{
  int i,n,c=0,r,j,result=0;
      printf("enter number to check armstrong number : \n");
      scanf("%d",&n);
      j=n;
      for(i=1;i<=n;i*=10) c++;
      for(j=n;j>0;j/=10)
      {
         r=j%10; result+=pow(r,c);
      }
      if(result==n) printf("number is armstrong");
      else printf("number is not armstrong");
}
void reversing_number()
{
  int n,i,j;
      char a[10],temp;
      printf("enter a number of maximum 10 digits = ");
      scanf("%s",&a);
      n=strlen(a);
      for(i=0,j=n-1;i<n/2;i++,j--)
      { temp=a[i];a[i]=a[j];a[j]=temp;
      }
      printf("the reversed string is= ");
      printf("%s",a);
}
void palindrome()
{
  char a[10];int i,j,c=0;
      printf("enter number to check palindrome (10 digits max): ");
      scanf("%s",&a);

      for(i=0,j=strlen(a)-1;i<=strlen(a)/2;i++,j--)
      {
         if(a[i]!=a[j])
         {c++; break;}
      }
      if(c==0) printf("number is palindrome");
      else printf("number is not palindrome");
}
int main()
{start:
  system("cls");
  printf("\n\t\t\tHello this is a program for performing the following functions \n 1. Even Odd\n 2. Prime/not Prime\n 3. Factorial\n 4. Fibonacci\n 5. Table of entered number\n 6. Armstrong Number\n 7. Reversing a number\n 8. Palindrome\n 9. Exit");
  printf("\nEnter your choice  ");
  int n;char ch='y';
  scanf("%d",&n);
  while(n)
  {
  switch(n)
  {
    case 1: system("cls");even_od();break;
    case 2: system("cls");prime_notprime();break;
    case 3: system("cls");factorial();break;
    case 4: system("cls");fibonacci();break;
    case 5: system("cls");table_of_entered_number();break;
    case 6: system("cls");armstrong_number();break;
    case 7: system("cls");reversing_number();break;
    case 8: system("cls");palindrome();break;
    case 9:goto end;break;
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
