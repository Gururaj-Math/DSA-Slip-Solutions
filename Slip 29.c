#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
	struct node *head, *temp, *newnode, *ptr;
	int choice;
	head=NULL;
	printf("\nDo you want to create an node (0,1)?");
	scanf("%d", &choice);
	while(choice)
	{
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter Data");
	scanf("%d", &newnode->data);
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
    ptr=head;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    temp=head;
	printf("\nData in the List\n");
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
    getch();
}