#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
typedef struct link_list
{
 int dt;
 struct link_list*nxt;
}node;
node *head=NULL,*ptr;
node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(node));
 printf("Enter the value:-");
 scanf("%d",&nw->dt);
 nw->nxt=NULL;
 return(nw);
}
void create()
{
 int x;
 do
 {
  if(head==NULL)
  {
   head=ptr=make();
  }
  else
  {
   ptr->nxt=make();
   ptr=ptr->nxt;
  }
  printf("Do you want to contineu 1-yes or 0->no:-");
  scanf("%d",&x);
 }while(x!=0);
}
void display()
{
 ptr=head;
 printf("\n\nYour user given number:-\n");
 while(ptr!=NULL)
 {
  printf("%d ",ptr->dt);
  ptr=ptr->nxt;
 }
}
void reverse()
{
 node *prevnode,*currentnode,*nxtnode;
 prevnode=0;
 currentnode=nxtnode=head;
 while(nxtnode!=0)
 {
  nxtnode=nxtnode->nxt;
  currentnode->nxt=prevnode;
  prevnode=currentnode;
  currentnode=nxtnode;
 }
 head=prevnode;
 printf("Your give number is reversed:-\n");
 head=ptr;
 while(ptr!=NULL)
 {
  printf("%d ",ptr->dt);
  ptr=ptr->nxt;
 }
}
void main()
{
 clrscr();
 create();
 getch();
 int x;
 while(1)
 {
  clrscr();
  printf("\n 1->display\n 2->reverse\n 0->exit\n");
  scanf("%d",&x);
  switch(x)
  {
   case 1:
	  clrscr();
	  display();
	  getch();
	  break;
   case 2:
	  clrscr();
	  reverse();
	  getch();
	  break;
   case 0:
	  printf("Thank for using sonu's program");
	  getch();
	  exit(0);
   default:
	   printf("\n Wrong Entry");
	   break;
  }

 }
}