#include<stdio.h>
#include<stdlib.h>
void crease()
void display()
void insert_begin()
void insert_end()
void insert_pos();
void delete_end();
void delete_pos();

struct node
{
int data;
struct node*next;
};
struct node *first=NULL;
int main()
{
int choice;
 
while(1)
{
printf("\n ***Singly Linked List***\n");
printf("\n Menu \n");

printf("\n1.Create\n");
printf("\n2.Display\n");
printf("\n3.Insert at the beginning\n");
printf("\n4.Insert at the end\n");
printf("\n4.Insert at the specified position\n");
printf("\nDelete from the beginning\n");
printf("\nDelete from the end\n");
printf("\nDelete from the specified position\n");
printf("\n9.Exit\n");


printf("Enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:crease();
       break;
case 2:display();
       break;
case 3:insert_begin();
       break;
case 4:insert_end();
       break;
case 5:insert_pos();
       break;
case 6:delete_begin();
       break;
case 7:delete_end();
       break;
case 8:delete_pos();
       break;
case 9:exit(0);
       break;

default:printf("\nWrong choice\n");
        break;
}
}
return 0;
}

void create()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space:\n");
exit(0);
}
printf("\nEnter the data for the next node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
}
else
{
ptr=first;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}
}
void display()
{
struct node *ptr;
if(first==NULL)
{
printf("\nList is empty\n");
return;
}
else
{
ptr=first;
printf("\nThe list elements are:\n")
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
}
}


void insert_begin()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space:\n");
return;
}
printf("\nEnter the data for the next node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
}
else
{
temp->next=first;
first=temp;
}
}


void insert_end()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space:\n");
return;
}
printf("\nEnter the data for the next node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
}
else
{
ptr=first;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
}
}


void insert_pos()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space:\n");
return;
}
printf("\nEnter the position of the new node to be inserted:\t");
scanf("%d",&pos);
printf("\nEnter the data for the next node:\t");
scanf("%d",&temp->data);
temp->next=NULL;
if(pos==0)
{
temp->next=first;
first=temp;
}
else
{
for(i=0,ptr=first;i<pos-1;i++)
{
ptr=ptr->next;
if(ptr==NULL)
{
printf("\nPosition not found\n");
return;
}
}
temp->next=ptr->next;
ptr->next=temp;
}
}



void delete_begin()
{
struct node *ptr;
if(ptr==NULL)
{
printf("\nlist is empty\n");
return;
}
else
{
ptr=first;
first=first->next;
printf("\nThe deleted element is %d\t",ptr->data);
free(ptr);
}
}

void delete_end()
{
struct node *ptr,*temp;;
if(ptr==NULL)
{
printf("\nlist is empty\n");



