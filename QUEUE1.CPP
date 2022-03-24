#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
typedef struct queue
{
 int dt[MAX];
 int h,t;
}q;
q *qu1;
void enqueue()
{
 if(qu1->t==(MAX-1))
 {
  printf("Queue is full");
 }
 else if(qu1->t==-1&&qu1->h==-1)
 {
  qu1->h++;
  qu1->t++;
  printf("Enter the value:-");
  scanf("%d",&qu1->dt[qu1->t]);
 }
 else
 {
  qu1->t++;
  printf("Enter the value:-");
  scanf("%d",&qu1->dt[qu1->t]);
 }
}
void dequeue()
{
 if(qu1->h==-1)
 {
  printf("\nQueue is empty");
 }
 else
 {
  int t=qu1->dt[qu1->h];
  qu1->dt[qu1->h]=0;
  qu1->h++;
  printf("%d value is deleted",t);
 }
}
void display()
{
 int i;
 if(qu1->h==-1&&qu1->t==-1)
 {
  printf("Queue is empty");
 }
 else
 {
  for(i=qu1->h;i<=qu1->t;i++)
  {
   printf("%d ",qu1->dt[i]);
  }
 }
}
void main()
{
 qu1->h=-1;
 qu1->t=-1;
 int x;
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
