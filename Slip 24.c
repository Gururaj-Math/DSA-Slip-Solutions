#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    struct node *newnode, *head, *temp, *prev;
    int choice, last;
    head=NULL;
    printf("\nDo you want to create a node(0,1)?");
    scanf("%d",&choice);
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nNode created successfully!");
        printf("\nDo you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    temp=head;
    printf("\nData list:\n");
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp->next!=NULL)
        {
            temp=temp->next;
        }
    last=temp->data;
    temp=head;
    while(temp->next!=0)
        {
             prev=temp;
             temp=temp->next;
        }
    temp->next=head;
    head=temp;
    prev->next=NULL;
    temp=head;
    printf("\nUpdated Data list:\n");
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    getch();
}