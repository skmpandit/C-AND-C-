#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct link_list
{
 int roll;
 char nm[30];
 char dp[10];
 struct link_list*nxt;
}node;
 node *head=NULL,*ptr;
 node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(node));
 printf("Enter the name:-");
 scanf("%s",nw->nm);
 printf("Enter the deprtment:-");
 scanf("%s",nw->dp);
 printf("Enter the roll:-");
 scanf("%d",&nw->roll);
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
  printf("Do you want to contineou 1->Yes And 0->No:-");
  scanf("%d",&x);
 }while(x!=0);
}
void display()
{
 ptr=head;
 while(ptr!=NULL)
 {
  printf("\nName=%s\nDepartment=%s\nRoll=%d",ptr->nm,ptr->dp,ptr->roll);
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