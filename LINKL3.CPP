#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct link_list
{
  int dt;
  struct link_list*nxt;
}node;
node *head=NULL,*ptr;
node *make()
{
 node *nw;
 nw=(node*)malloc(sizeof(int));
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
    printf("Do you want to contineo 1->Yes And 0->No:-");
    scanf("%d",&x);
   }while(x!=0);
  }
 void display()
 {
 printf("\nUser given number:-\n");
  ptr=head;
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
  display();
  getch();
 }