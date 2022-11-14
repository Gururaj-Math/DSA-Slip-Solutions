#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *addend(struct node *head, int d);
void main()
{
	struct node *head, *temp, *newnode, *prev, *current;
    int data;
	int choice, pos;
	head=NULL;
	printf("\nDo you want to create an node (0,1)?");
	scanf("%d", &choice);
	while(choice)
	{
	newnode= (struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data");
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
	printf("\nDo you want to continue (0,1)?");
	scanf("%d", &choice);
	}
    temp=head;
	printf("\nData in the List\n");
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
    printf("\nEnter data to add at end:");
    scanf("%d",&data);
    addend(head, data);
    temp=head;
	printf("\nUpdated Data in the List\n");
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
    printf("\nEnter position of element to delete");
    scanf("%d",&pos);
    current=head;
    prev=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else if(pos==1)
    {
        head=current->next;
        free(current);
        current=NULL;
    }
    else
    {
        while(pos!=1)
        {
            prev=current;
            current=current->next;
            pos--;
        }
        prev->next=current->next;
        free(current);
        current=NULL;
    }
    temp=head;
	printf("\nUpdated Data in the List\n");
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
	getch();
}
struct node *addend(struct node *head, int d)
{
    struct node *newnode, *temp;
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
