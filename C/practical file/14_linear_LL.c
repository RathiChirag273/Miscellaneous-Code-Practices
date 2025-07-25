//14. Write a program to implement Linear Linked List, showing all the operations, like creation, display, insertion, deletion and searching.

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data)
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
  if (prev_node == NULL)
  {
  printf("the given previous node cannot be NULL");
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertAtEnd(struct Node** head_ref, int new_data)
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref;
  new_node->data = new_data;
  new_node->next = NULL;
  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }
  while (last->next != NULL) last = last->next;
  last->next = new_node;
  return;
}

void deleteNode(struct Node** head_ref, int key)
{
  struct Node *temp = *head_ref, *prev;
  if (temp != NULL && temp->data == key)
  {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  while (temp != NULL && temp->data != key)
  {
  prev = temp;
  temp = temp->next;
  }
  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}

int searchNode(struct Node** head_ref, int key)
{
  struct Node* current = *head_ref;

  while (current != NULL)
  {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}

void printList(struct Node* node)
{
  while (node != NULL)
  {
  printf(" %d ", node->data);
  node = node->next;
  }
}

int main()
{
  struct Node* head = NULL;

  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);

  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);

  int item_to_find = 3;
  if (searchNode(&head, item_to_find))
  {
  printf("\n%d is found", item_to_find);
  } else
  {
  printf("\n%d is not found", item_to_find);
  }
}
