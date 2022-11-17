#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(char item);
void display();
struct node{
    char data;
    struct node *next;
}*top=NULL;
void main(){  
    char item;  
    printf("Enter String to be pushed:\n");
    scanf("%s",&item);
    push(item);
    display();
    getch();
};
void push(item){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    else{
        newnode->data=item;
        newnode->next=NULL;
        top=newnode;
    }
};
void display(){
    struct node *temp;
    temp=top;
    printf("Stack elements:\n");
    while(temp){
        printf("%s \t",temp->data);
        temp=temp->next;
    }
};