#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct double_link
{
 struct double_link *prev;
 int roll;
 char nm[40];
 char fnm[40];
 char mnm[40];
 char vill[40];
 int rc;
 char dp[20];
 struct double_link *nxt;
}node;
node *head=NULL,*ptr;
node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(node));
 printf("Enter the name:-");
 scanf("%s",nw->nm);
 printf("Enter the father name:-");
 scanf("%s",nw->fnm);
 printf("Enter the mother name:-");
 scanf("%s",nw->mnm);
 printf("Enter the village name:-");
 scanf("%s",nw->vill);
 printf("Enter the roll no.:-");
 scanf("%d",&nw->roll);
 printf("Enter the roll code:-");
 scanf("%d",&nw->rc);
 printf("Enter the department:-");
 scanf("%s",nw->dp);
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
 printf("\n\n Name=%s\n Father's name=%s\n Mother's name=%s\n Village=%s\n Roll number=%d\n Roll code=%d\n department=%s\n\n",ptr->nm,ptr->fnm,ptr->mnm,ptr->vill,ptr->roll,ptr->rc,ptr->dp);
 ptr=ptr->nxt;
}
void main()
{
 clrscr();
 create();
 display();
 getch();
}