#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct double_link
{
 struct double_link *prev;
 int dt;
 struct double_link *nxt;
}node;
node *head=NULL,*ptr;
node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(node));
 printf("Enter the number;-");
 scanf("%d",&nw->dt);
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
  printf("Do you want to contineou 1->Yes and 0->No:-");
  scanf("%d",&x);
 }while(x!=0);
}
void display()
{
 ptr=head;
 printf("\nHead ->%u ", head);
 while(ptr!=NULL)
 {
  printf("\n %u\t %d\t %u",ptr->prev,ptr->dt,ptr->nxt);
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