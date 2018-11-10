#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
int data;
struct BST *lchild,*rchild;
}node;

void insert(node*,node*);
void inorder(node*);
void preorder(node*);
void postorder(node*);
node *search(node*,int,node **);

void main()
{
int choice;
char ans='N';
int key;
node *new_node,*root,*tmp,*parent;
node *get_node();
root=NULL;
printf("\nProgram for Binary Search Tree\n");

do
{
printf("\n1.Create");
printf("\n2.Search");
printf("\n3.Display Preorder");
printf("\n4.Exit");
printf("\nEnter your choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:
do
{
new_node=get_node();
printf("\nEnter the element");
scanf("%d",&new_node->data);


if(root==NULL)
root=new_node;
else
insert(root,new_node);

printf("\nWant to enter more elements?(y/n)");
scanf("%c",&ans);
}while(ans=='y');
break;

case 2:

printf("\nEnter element to be searched:");
scanf("%d",&key);
tmp=search(root,key,&parent);
printf("\nParent of node %d is %d",tmp->data,parent->data);
break;


case 3:

if(root==NULL)
printf("Tree is not created");
else
{
printf("\nThe Preorder display\n");
inorder(root);
}
break;
}
}while(choice!=4);
}



node *get_node()
{
node *temp;
temp=(node *)malloc(sizeof(node));

temp->lchild=NULL;
temp->rchild=NULL;
return temp;
}



void insert(node *root,node *new_node)
{
if(new_node->data<root->data)
{
if(root->lchild==NULL)
root->lchild=new_node;
else
insert(root->lchild,new_node);
}
if(new_node->data>root->data)
{
if(root->rchild==NULL)
root->rchild=new_node;
else
insert(root->rchild,new_node);
}
}


node *search(node *root,int key,node **parent)
{
node *temp;
temp=root;
while(temp!=NULL)
{
if(temp->data==key)
{
printf("\nThe %d elements are present",temp->data);
return temp;
}
*parent=temp;


if(temp->data>key)
temp=temp->lchild;
else
temp=temp->rchild;
}
return NULL;
}



void inorder(node *temp)
{
if(temp!=NULL)
{
inorder(temp->lchild);
printf("%d",temp->data);
inorder(temp->rchild);
}
}

