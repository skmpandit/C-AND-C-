#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
int items[SIZE];
int front=-1,rear=-1;
int isfull()
{
 if((front==rear+1)||(front==0&&rear==SIZE-1))return 1;
 return 0;
}
int isempty()
{
 if(front==-1)
   return 1;
 else
   return 0;
}
void enqueue()
{
 int element;
 if(isfull())
 {
 printf("\nQueue is full\n");
 }
 else
 {
   printf("\n Enter a element :-> ");
   scanf("%d",&element);
     if(front==-1)
     front=0;
  rear=(rear+1)%SIZE;
  items[rear]=element;
 }
}
void dequeue()
{
 int element;
 if(isempty())
 {
  printf("\nQueue is empty\n");
 }
 else
 {
  element=items[front];
  if(front==rear)
  {
   front=-1;
   rear=-1;
  }
  else
  {
   front=(front+1)%SIZE;
  }
  printf("\nDeleted element->%d\n",element);
 }
}
void display()
{
 int i;
 if(isempty())
 {
  printf("\n empty queue\n");
 }
 else
 {
  printf("\n front->%d",front);
  printf("\n items->");
  for(i=front;i!=rear;i=(i+1)%SIZE)
  {
   printf("%d ",items[i]);
  }
  printf("%d",items[i]);
  printf("\n rear->%d\n",rear);
 }
}
void main()
{
 int x;
 int element;
 while(1)
 {
  clrscr();
  printf("\n1->enqueue\n2->dequeue\n3->display\n0->exit\n");
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
	  printf("\n Thank you for using sonu's program.");
	  getch();
	  exit(0);
   default:
	   printf("\nWrong entry.");

  }
 }
}
