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
    struct node *head, *newnode, *temp, *prev, *current, *ptr;
    int choice,count = 0;
    head=NULL;
    printf("\nDo you want to create a node?(0,1)\n");
    scanf("%d",&choice);
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data:\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nNode created successfully\n");
        printf("\nDo you want continue?(0,1)\n");
        scanf("%d",&choice);
    }
    temp=head;
    printf("\nalt elements:\n");
    /*for(count = 0; temp!=NULL;count + 2)
    {
        printf("%d\t"temp->data);
		temp = temp->data;
    }*/
	while(temp != NULL)
	{
		printf("%d",temp->data);
		if(temp->next == NULL)
			temp = NULL;
		else
			temp = temp->next->next;
	}
    getch();
}