#include<stdio.h>
int a[10];
void main()
{
int n,i,item,ch;
printf("Enter the number of elements");
scanf("%d",&n);
int front=-1,rear=-1;
do 
{
printf("\n1.Add\n2.Delete\n3.Display\n4.Exit\n");
printf("Enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the element\n");
       scanf("%d",&item);
       if((front==rear+1)||(front==0&&rear==n-1))
       printf("queue is full");
       else
       {
       if(front==-1)
       front=0;
       rear=(rear+1)%n;
       a[rear]=item;
       printf("%d is inserted\n",item);
       }
       break;
case 2:if(front==-1)
       	printf("Underflow");
       else
       {
       	item=a[front];
       	if(front==rear)
       {
       rear=-1;
       front=-1;
       }
       else
       {
       front=(front+1)%n;
       }
       printf("\nDeleted element%d",item);
       }
       break;
case 3:if(front==-1)
       {
       printf("underflow");
       }
       else
       {
       printf("The elements are:");
       for(int i=front;i<=rear;i=(i+1)%n)
       printf("%d",a[i]);
       }
       break;
default:printf("\ninvalid choice");
        break;
       }
       }while(ch!=4);
       }
        
     
