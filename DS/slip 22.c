#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void main(){
    struct node *head, *newnode, *temp;
    int choice;
    int count_odd=0;
    int count_even=0;
    int count_zero=0;
    head=NULL;
    printf("Do you want to create a node (0,1)?\n");
    scanf("%d",&choice);
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
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
        printf("Node created successfully!\n");
        printf("Do you want to create a node (0,1)?\n");
        scanf("%d",&choice);
    }
    temp=head;
	printf("\nData in the List\n");
	while(temp!=0)
	{
		printf("%d\t", temp->data);
		temp=temp->next;
	}
    temp=head;
    while(temp!=0)
    {
        if(temp->data%2==0){
            count_odd++;
        }
        else{
            count_even++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=0)
    {
        if(temp->data>0)
        {
            count_zero++;
        }
        temp=temp->next;
    }
    printf("\nNo. of non zero elements:%d",count_zero);
    printf("\nNo. of odd elements:%d",count_odd);
    printf("\nNo. of even elements: %d",count_even);
    getch();
}