#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node* newNode();
struct node* insert();
void inorder();
int main()
{
	struct node* root = NULL;
	int data;
	printf("\n  Enter 0 to exit ");
	scanf("%d",&data);
	while(data!=0) {
		root=insert(root, data);
		printf("\n  Enter 0 to  exit ");
		scanf("%d",&data);
	}
    inorder(root);
    return 0;
};
struct node* newNode(int item)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
};
struct node* insert(struct node* node, int data)
{
	if (node == NULL)
		return newNode(data);
	if (data < node->data)
		node->left = insert(node->left, data);
	else if (data > node->data)
		node->right = insert(node->right, data);
	return node;
};
void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
};