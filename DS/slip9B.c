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
    int choice;
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
    printf("\nData list:\n");
    while(temp!=0)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    current=head;
    prev=NULL;
    ptr=NULL;
    while(current!=NULL)
    {
        ptr=current->next;
        current->next=prev;
        prev=current;
        current=ptr;
    }
    head=prev;
    temp=head;
    printf("\nUpdated Data list:\n");
    while(temp!=0)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    getch();
}