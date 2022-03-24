#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
typedef struct stack
{
 int dt;
 struct stack*nxt;
}st;
st *head=NULL,*sp,*ptr;
st *make()
{
 st *nw;
 nw=(st*)malloc(sizeof(st));
 printf("Enter the value:-");
 scanf("%d",&nw->dt);
 nw->nxt=NULL;
 return(nw);
}
void push()
{
 st *nw;
 if(head==NULL)
 {
  head=sp=make();
 }
 else
 {
  nw=make();
  if(nw==NULL)
  {
   printf("\nMemory full");
  }
  else
  {
   nw->nxt=sp;
   sp=head=nw;
  }
 }
}
void pop()
{
 st *nw;
 if(head==NULL)
 {
  printf("\nStack is emty");
 }
 else
 {
  nw=sp;
  head=sp->nxt;
  sp=sp->nxt;
  printf("value %d delete ",nw->dt);
  free(nw);
 }
}
void display()
{
 ptr=head;
 while(ptr!=NULL)
 {
  printf("%d",ptr->dt);
  ptr=ptr->nxt;
 }
}
void main()
{
 int x;
 while(1)
 {
  printf("\n1->push\n2->pop\n3->display\n0->exit\n");
  scanf("%d",&x);
  switch(x)
  {
   case 1:
	  clrscr();
	  push();
	  getch();
	  getch();
	  break;
   case 2:
	  clrscr();
	  pop();
	  getch();
	  break;
   case 3:
	  clrscr();
	  display();
	  getch();
	  break;
   case 0:
	  printf("Thanks for using sonu's program");
	  getch();
	  exit(0);
   default:
	   printf("\n wrong entry");
  }
 }
}