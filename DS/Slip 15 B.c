#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int item);
int pop();
void display();
struct node{
    int data;
    struct node *next;
}*top=NULL;
void main(){
    int choice, item;
    while(1){
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.Display \n");
    printf("4.Exit \n");
    printf("Enter choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter element to push \n");
        scanf("%d",&item);
        push(item);
        break;
        case 2:
        item=pop();
        printf("Deleted data is %d\n",item);
        break;
        case 3:
        printf("Elements in stack \n");
        display();
        break;
        case 4:
        exit(1);
        break;
        default:
        printf("Wrong choice\n");
        break;
}
    }
getch();
};
void push(int item){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Stack overflow\n");
        exit(1);
    }
    else{
        newnode->data=item;
        newnode->next=NULL;
        newnode->next=top;
        top=newnode;
    }
};
int pop(){
    struct node *temp;
    int val;
    temp=top;
    val=temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return val;
};
void display(){
    struct node *temp;
    temp=top;
    while(temp){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
};