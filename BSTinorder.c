#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int x)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
	
}
struct node *enter(struct node *base,int x)
{
	if(base==NULL)
	{
		return newnode(x);
	}
	if(base->data > x)
	{
		base->left=enter(base->left,x);
	}
	else if(base->data < x)
	{
		base->right=enter(base->right,x);
	}
	return base;
}
void inorder(struct node *base)
{
	if(base==NULL)
		return;
	inorder(base->left);
	printf("%d \n",base->data);
	inorder(base->right);
}
int main()
{
	struct node *root=NULL;
	root=enter(root, 50);
    enter(root, 30);
    enter(root, 20);
    enter(root, 40);
    enter(root, 90);
    enter(root, 60);
    enter(root, 80);
  
    
    inorder(root);
  
    return 0;

}
