#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node2
{
	int data2;
	struct node2 *next2;
};
void concat(struct node *head, struct node2 *head2);
void main()
{
	struct node *head, *temp, *newnode;
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
	struct node2 *head2, *temp2, *newnode2;
	int choice2;
	head2=NULL;
	printf("\nDo you want to create an node 2 (0,1)?");
	scanf("%d", &choice2);
	while(choice2)
	{
	newnode2=(struct node2*)malloc(sizeof(struct node2));
	printf("Enter Data");
	scanf("%d", &newnode2->data2);
	newnode2->next2=0;
    if(head2==0)
	{
		head2=temp2=newnode2;
	}
	else
	{
		temp2->next2=newnode2;
		temp2=newnode2;
	}
	printf("Node is created successfully\n");
	printf("Do you want to continue (0,1)?");
	scanf("%d", &choice2);
	}
    concat(head, head2);
	getch();
}
void concat(struct node *head, struct node2 *head2){
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    head2=NULL;
    temp=head;
    printf("\nConcatination of two linked list:\n");
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
}

