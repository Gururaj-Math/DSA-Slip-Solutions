// B) Write a ‘C’ program to swap mth and nth  element of singly linked list.

#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void main()
{
  struct node *head, *temp, *newnode, *ptr;
  int choice;
  head = NULL;
  printf("\nDo you want to create an node (0,1) ? ");
  scanf("%d", &choice);
  while (choice)
  {
    newnode = malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
    printf("Node is created successfully\n");
    printf("\nDo you want to continue (0,1)?");
    scanf("%d", &choice);
  }
  temp = head;
  printf("\nData in the List\n");
  while (temp != 0)
  {
    printf("%d\t", temp->data);
    temp = temp->next;
  }

  temp = head->next;

  ptr = malloc(sizeof(struct node));

  printf("\n Before Swap\n");
  printf("\n %d %d\n", head->data, temp->data);

  ptr->data = head->data;
  head->data = temp->data;
  temp->data = ptr->data;

  printf("\n After Swap\n");
  printf("\n %d %d\n", head->data, temp->data);
}
