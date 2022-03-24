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
  printf("Do you want to countinou 1->yes and 0->no:-");
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
void search()
{
  int x,f=0;
  printf("\nEnter the search value:-");
  scanf("%d",&x);
  ptr=head;
  while(ptr!=NULL)
  {
   if(ptr->dt==x)
   {
    f=1;
    break;
   }
   ptr=ptr->nxt;
  }
  if(f==1)
  {
   printf("\n%d Value is found\n",x);
  }
  else
  {
   printf("\nvalue is not found\n");
  }
   getch();
}
void del()
{
 clrscr();
 int x;
 node *n;
 ptr=head;
 printf("\n 1-> FIRST NODE \n 2-> LAST NODE \n 3-> MIDDLE NODE \n 0-> EXIT \n");
 scanf("%d",&x);
 switch(x)
 {
  case 1:
	clrscr();
	head=ptr->nxt;
	n=ptr;
	free(n);
	printf("\nFirst Node Deleted ");
	break;
  case 2:
	clrscr();
	ptr=head;
	while(ptr->nxt->nxt!=NULL)
	{
	 ptr=ptr->nxt;
	}
	n=ptr->nxt;
	ptr->nxt=NULL;
	free(n);
	printf("\nLast Node Deleted ");
	break;
   case 3:
	clrscr();
	int x,f=0;
	printf("\nEnter the search value:-");
	scanf("%d",&x);
	ptr=head;
	while(ptr!=NULL)
	{
	 if(ptr->nxt->dt==x)
	 {
	  f=1;
	  break;
	 }
	 ptr=ptr->nxt;
	}
	if(f==1)
	{
	 printf("\nValue is found\n");
	 n=ptr->nxt;
	 ptr->nxt=ptr->nxt->nxt;
	 free(n);
	 printf("\n%d Value Deleted\n",x);
	}
	else
	{
	 printf("\nValue is not found\n");
	}
	getch();
	break;
   case 0:
	 printf("\nYou are exit from deletion program\n");
	 getch();
	 break;
   default :
	 printf("\nWrong Entry \n ");
 }
}

void insert()
{
 clrscr();
 int x;
 node *n;
 do
  {
   printf("\n 1-> FIRST NODE \n 2-> LAST NODE \n 3-> MIDDLE NODE \n 0-> EXIT \n");
   scanf("%d",&x);
   switch(x)
    {
     case 1:
	   clrscr();
	   n=make();
	   n->nxt=head;
	   head=n;
	   break;
     case 2:
	   clrscr();
	   ptr=head;
	   n=make();
	   while(ptr->nxt!=NULL)
	   {
	    ptr=ptr->nxt;
	   }
	   ptr->nxt=n;
	   break;
     case 3:
	   clrscr();
	   int x,f=0;
	   printf("\nEnter the search value:-");
	   scanf("%d",&x);
	   ptr=head;
	   while(ptr!=NULL)
	   {
	    if(ptr->dt==x)
	    {
	     f=1;
	     break;
	    }
	    ptr=ptr->nxt;
	   }
	   if(f==1)
	   {
	    printf("\nValue is found\n");
	    n=make();
	    n->nxt=ptr->nxt;
	    ptr->nxt=n;
	   }
	   else
	   {
	    printf("\nValue is not found\n");
	   }
	   getch();
	   break;
     case 0:
	   printf("\nYou are exit from insertion program\n");
	   getch();
	   break;
     default :
	   printf("\nWrong Entry \n ");
    }
    printf("Do you want to countinou 1->yes and 0->no:-");
    scanf("%d",&x);
 }while(x!=0);
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
 printf("Your given value is reversed:-\n");
 ptr=head;
 while(ptr!=NULL)
 {
  printf("%d ",ptr->dt);
  ptr=ptr->nxt;
 }
}
void count()
{
 node *ptr=head;
 int c=0;
 while(ptr!=NULL)
 {
  c++;
  ptr=ptr->nxt;
 }
 printf("Your linklist have %d data",c);
 getch();
}
void insortionsort()
{
 node *y,*x,*e;
 x=head;
 head=NULL;
 while(x!=NULL)
 {
  e=x;
  x=x->nxt;
  if(head!=NULL)
  {
   if(e->dt>head->dt)
   {
    y=head;
    while((y->nxt!=NULL)&&(e->dt>y->nxt->dt))
    {
     y=y->nxt;
    }
    e->nxt=y->nxt;
    y->nxt=e;
   }
   else
   {
    e->nxt=head;
    head=e;
   }
  }
  else
  {
   e->nxt=NULL;
   head=e;
  }
 }
 ptr=head;
 printf("Your linklist is sorted:-\n");
 while(ptr!=NULL)
 {
  printf("%d ",ptr->dt);
  ptr=ptr->nxt;
 }
 getch();
}
void main()
{
 clrscr();
 create();
 display();
 getch();
 int x;
 while(1)
 {
  clrscr();
  printf("\n 1->DISPLAY \n 2->INSERT \n 3->DELETE \n 4->SEARCH \n 5->REVERSE \n 6->COUNT \n 7->INSOERTION SORT \n 0->EXIT \n");
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
	 insert();
	 getch();
	 break;
   case 3:
	 clrscr();
	 del();
	 getch();
	 break;
   case 4:
	 clrscr();
	 search();
	 getch();
	 break;
   case 5:
	 clrscr();
	 reverse();
	 getch();
	 break;
   case 6:
	 clrscr();
	 count();
	 getch();
	 break;
   case 7:
	 clrscr();
	 insortionsort();
	 getch();
	 break;
   default :
	 printf("\nWrong Entry \n ");
	 break;
   case 0:
	 printf("\n\nThank You For Using Sonu'S Program ");
	 getch();
	 exit(0);
  }
 }
}
