#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
typedef struct queue
{
 int dt;
 struct queue*nxt;
}q;
q *head=NULL,*h,*t,*ptr;
q *make()
{
 q *nw;
 nw=(q*)malloc(sizeof(q));
 printf("\nEnter the value:-");
 scanf("%d",&nw->dt);
 nw->nxt=NULL;
 return(nw);
}
void enqueue()
{
 if(head==NULL)
 {
  head=h=t=make();
 }
 else
 {
  t->nxt=make();
  t=t->nxt;
 }
}
void dequeue()
{
  if(head==NULL)
  {
     printf("\n Queue is Empty");
  }
  else
  {
 q *nw;
 nw=h;
 head=h=h->nxt;
 printf("%d deleted",nw->dt);
 free(nw);
 }
}
void display()
{
  if(head==NULL)
  {
     printf("\n Queue is Empty");
  }
  else
  {
    ptr=h;
    while(ptr!=NULL)
    {
      printf("%d ",ptr->dt);
      ptr=ptr->nxt;
     }
   }
}
void main()
{
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
