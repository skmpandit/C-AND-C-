#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct link_list
{
 int roll;
 char nm[30];
 struct link_list*nxt;
}node;
node *head=NULL,*ptr;
node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(node));
 printf("Enter the roll:-");
 scanf("%d",&nw->roll);
 printf("Enter the name:-");
 scanf("%s",nw->nm);
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
  printf("Do you want to contineu 1->yes and 0->no:-");
  scanf("%d",&x);
 }while(x!=0);
}
void display()
{
 ptr=head;
 while(ptr!=NULL)
 {
  printf("\nRoll=%d\nName=%s\n",ptr->roll,ptr->nm);
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