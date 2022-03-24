#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *nxt;
};
struct node *front=0;
struct node *rear=0;
void enqueue()
{
 struct node *newnode;
 int x;
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the value:-");
 scanf("%d",&x);
 newnode->data=x;
 newnode->nxt=0;
 if(rear==0)
 {
  front=rear=newnode;
  rear->nxt=front;
 }
 else
 {
 rear->nxt=newnode;
 rear=newnode;
 rear->nxt=front;
 }
}
void dequeue()
{
 struct node *temp;
 temp=front;
 if(front==0&&rear==0)
 {
  printf("\nQueue is empty.");
 }
 else if(front==rear)
 {
  front=rear=0;
  printf("%d is deleted",temp->data);
  free(temp);
 }
 else
 {
  front=front->nxt;
  rear->nxt=front;
  printf("%d is deleted",temp->data);
  free(temp);
 }
}
void display()
{
 struct node *temp;
 temp=front;
 if(front==0&&rear==0)
 {
  printf("\nQueue is empty.");
 }
 else
 {
  while(temp->nxt!=front)
  {
   printf("%d ",temp->data);
   temp=temp->nxt;
  }
  printf("%d ",temp->data);
 }
}
void main()
{
 int x;
 while(1)
 {
  clrscr();
  printf("\n1->Enqueue\n2->Dequeue\n3->Display\n0->exit\n");
  scanf("%d",&x);
  switch(x)
  {
   case 1:
	  clrscr();
	  enqueue();
	  getch();
	  break;
   case 2:
	  clrscr();
	  dequeue();
	  getch();
	  break;
   case 3:
	  clrscr();
	  display();
	  getch();
	  break;
   case 0:
	  printf("Thank you for using sonu's frogram.");
	  getch();
	  exit(0);
   default:
	  printf("\nWorng entry.");
  }
 }
}


