#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
typedef struct double_link
{
 struct double_link *prev;
 int roll;
 char nm[30];
 char dept[20];
 struct double_link *nxt;
}node;
node *head=NULL,*ptr;
node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(node));
 printf("\nEnter the name:-");
 scanf("%s",nw->nm);
 printf("Enter the deprtment:-");
 scanf("%s",nw->dept);
 printf("Enter the roll:-");
 scanf("%d",&nw->roll);
 nw->nxt=NULL;
 nw->prev=NULL;
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
   node *n;
   n=make();
   ptr->nxt=n;
   n->prev=ptr;
   ptr=ptr->nxt;
  }
  printf("Do you want to contineo 1->yes and 0->no:-");
  scanf("%d",&x);
 }while(x!=0);
}
void display()
{
 ptr=head;
 printf("\nThe user student given data:-");
 while(ptr!=NULL)
 {
  printf("\n NAME=%s\n DEPRTMENT=%s\n ROLL=%d\n",ptr->nm,ptr->dept,ptr->roll);
  ptr=ptr->nxt;
 }
}
void main()
{
 clrscr();
 create();
 display();
 getch();
}