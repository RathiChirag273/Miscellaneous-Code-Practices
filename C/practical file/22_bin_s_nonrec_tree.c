//22. Write a program to implement Binary tree and display the contents using non-recursive preorder, postorder and inorder traversal techniques.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int data;
  struct node *rlink;
  struct node *llink;
}
*tmp=NULL;
typedef struct node NODE;
NODE *create()
{
  NODE *newnode;
  int n;
  newnode=(NODE *)malloc(sizeof(NODE));
  printf(" Enter the Data ");
  scanf("%d",&n);
  newnode->data=n;
  newnode->llink=NULL;
  newnode->rlink=NULL;
  return(newnode);
}
void postorder(NODE *tmp)
{
  if(tmp!=NULL)
  {
    postorder(tmp->llink);
    postorder(tmp->rlink);
    printf("%d->",tmp->data);
  }
}
void inorder(NODE *tmp)
{
  if(tmp!=NULL)
  {
    inorder(tmp->llink);
    printf("%d->",tmp->data);
    inorder(tmp->rlink);
  }
}
void preorder(NODE *tmp)
{
  if(tmp!=NULL)
  {
    printf("%d->",tmp->data);
    preorder(tmp->llink);
    preorder(tmp->rlink);
  }
}
void insert(NODE *root)
{
  NODE *newnode;
  if(root==NULL)
  {
    newnode=create();
    root=newnode;
  }
  else
  {
    newnode=create();
    while(1)
    {
      if(newnode->data<root->data)
      {
        if(root->llink==NULL)
        {
          root->llink=newnode;
          break;
        }
        root=root->llink;
      }
      if(newnode->data>root->data)
      {
        if(root->rlink==NULL)
        {
          root->rlink=newnode;
          break;
        }
        root=root->rlink;
      }
    }
  }
}
void main()
{
  int n,i,m;
  system("cls");
  do
  {
    printf("\n 0.create\n 1.insert \n 2.preorder\n 3.postorder\n 4.inorder\n 5.exit");
    printf("\n Enter ur choice: ");
    scanf("%d",&m);
    switch(m)
    {
      case 0: tmp=create(); break;
      case 1: insert(tmp); break;
      case 2: printf(" Display tree in Preorder traversal\n"); preorder(tmp); printf("\n"); break;
      case 3: printf(" Display Tree in Postorder traversal\n"); postorder(tmp); printf("\n"); break;
      case 4: printf(" Display Tree in Inorder traversal\n"); inorder(tmp); printf("\n"); break;
      case 5: exit(0);
    }
  }while(n!=5);
  getch();
}
