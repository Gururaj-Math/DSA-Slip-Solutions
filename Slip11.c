#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
void lastinsert();
void main()
{
	struct node *head, *temp, *newnode;
	int choice, search, flag, i=0, item;
	head=NULL;
	printf("Do you want to create an node (0,1)?");
	scanf("%d", &choice);
	while(choice)
	{
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter Data");
	scanf("%d",&newnode->data);
	newnode->next=0;
    if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	printf("Node is created successfully\n");
	printf("Do you want to continue (0,1)?");
	scanf("%d", &choice);
	}
    temp=head;
	printf("\nData in the List\n");
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
	printf("\nDo you want to insert node at last? (0,1)?");
	scanf("%d", &choice);
	while(choice)
	{
		lastinsert();
	}
	printf("\nUpdated Data in the list\n");
	while(temp->next!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
	printf("\nEnter Element to search:\n");
	scanf("%d",&search);
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data==search)
			{
				printf("\n Item Found at location:%d",i+1);
				printf("\nData:%d",temp->data);
				flag=0;
				break;
			}
		else
			{
				flag=1;
			}
			i++;
			temp=temp->next;
	}
	if(flag==1)
	{
		printf("\nData Not Found!\n");
	}
	getch();
}
void lastinsert()
{
    struct node *newnode,*temp;
    int item;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode== NULL)
    {
	printf("\nOVERFLOW");
    }
else
    {
	printf("\nEnter value?\n");
	scanf("%d",&item);
	newnode->data = item;
	if(head == NULL)
	{
	    newnode-> next = NULL;
	    head = newnode;
	    printf("\nNode inserted");
	}
  else
	{
	    temp = head;
	    while (temp -> next != NULL)
	    {
		temp = temp -> next;
	    }
	    temp->next = newnode;
	    newnode->next = NULL;
	    printf("\nNode inserted");
		getch();
	}
    }
}
