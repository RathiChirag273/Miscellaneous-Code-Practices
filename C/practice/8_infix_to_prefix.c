#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
char a[50],b[50],pfix[50],stk[50];
int ptop=-1,stop=-1;
void push(char s)
{
  stop+=1;
  stk[stop]=s;

}
void pop()
{
  stop-=1;
}
void stack(char s)
{
  if(s=='(')
  {
    push(s);
  }
  if(s==')')
  { int i=stop;
    while(stk[i]!='(')
    {
      postfix(stk[i]);
      i-=1;pop();
    }
    pop();
  }
  if((s=='+')||(s=='-'))
  {
    int i=stop;
    while((stk[i]=='*')||(stk[i]=='/')||(stk[i]=='^'))
    {
      postfix(stk[i]);
      pop();i-=1;
    }
    push(s);
  }
  if((s=='*')||(s=='/'))
  {
    int i=stop;
    while((stk[i]=='^'))
    {
      postfix(stk[i]);
      pop();i-=1;
    }
    push(s);
  }
  if(s=='^') push(s);

}
void postfix(char p)
{
  ptop+=1;
  pfix[ptop]=p;
}
void initiate()
{
  for(int i=0;i<=strlen(b)+1;i++)
  {
    if(isalnum(b[i]))
    {
      postfix(b[i]);
    }
    else if((b[i]=='+')||(b[i]=='-')||(b[i]=='/')||(b[i]=='*')||(b[i]=='^')||(b[i]=='(')||(b[i]==')'))
    {
      stack(b[i]);
    }
  }
}
void design()
{

  for(int i=0;i<strlen(a);i++)
  {
    if(isalpha(a[i]))
    {
      if(islower(a[i]))
      {
        a[i]=toupper(a[i]);
      }
    }
  }
    a[strlen(a)+1]=')';
  for(int i=strlen(a);i>=0;i--)
  {
    a[i]=a[i-1];
  }
  a[0]='(';

 string_rev();
}
void string_rev()
{
  for(int i=strlen(a)-1,j=0;i>=0;i--,j++)
  {
    if((a[i]!='(')&&(a[i]!=')'))
    {
      b[j]=a[i];
    }
    else if(a[i]=='(')
    {
      b[j]=')';
    }
    else if(a[i]==')')
    {
      b[j]='(';
    }
  }
  //printf("%s",b);
}
void disp()
{
  printf("%s",strrev(pfix));
}
void main()
{
  printf("\t\t\t\tThe following program is to conver infix to postfix\n");
  printf("Enter the expression\n(Enter variables in capital only)\n(Available operators +,-,*,/,^)\n\t = ");
  scanf("%s",&a);
  design();
  initiate();
  disp();
}
