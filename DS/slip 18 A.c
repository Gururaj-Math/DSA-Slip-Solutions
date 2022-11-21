#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node *newnode(int item);
struct node *insert(struct node *node, int data);
void leaf(struct node *root);
int main(){
    struct node *root=NULL;
    int data;
    printf("\nEnter 0 to exit\n");
    scanf("%d",&data);
    while(data!=0){
    root=insert(root, data);
    printf("\nEnter 0 to exit\n");
    scanf("%d",&data);
    }
    printf("LEAF NODES:\n");
    leaf(root);
    return 0;
};
struct node *newnode(int item){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
};
struct node *insert(struct node *node, int data){
    if(node==NULL)
        return newnode(data);
    if(data<node->data)
        node->left=insert(node->left, data);
    else if(data>node->data)
        node->right=insert(node->right, data);
    return node;
};
void leaf(struct node *root){
    if(!root)
        return;
    if(!root->left && !root->right)
    {
        printf("%d \t",root->data);
        return;
    }
    if(root->left)
    leaf(root->left);
    if(root->right)
    leaf(root->right);
};