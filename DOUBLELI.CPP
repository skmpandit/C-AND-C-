#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
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
 printf("Enter the value:-");
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
 printf("Do you want to contineo1 ->yes and 0->no:-");
 scanf("%d",&x);
 }while(x!=0);
}
void display()
{
 ptr=head;
 printf("\n  Head-> %u ",head);
 while(ptr!=NULL)
 {
  printf("\n %u\t %d \t %u ",ptr->prev,ptr->dt,ptr->nxt);
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
		  printf("\n %d Value is found\n",x);
		 }
		 else
		 {
		  printf("value is not found");
		 }
	     getch();
}
void insert()
{
     clrscr();
     int x;
     node *n;
   do
   {
       printf("\n 1-> First Node \n 2-> Last Node \n 3-> Middle Node \n 0->EXIT \n");
       scanf("%d",&x);

       switch(x)
       {
	 case 1:
		clrscr();
		n=make();
		n->nxt=head;
		head->prev=n;
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
		n->prev=ptr;
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
		  printf("\n Value is found\n");
		  n=make();
		  n->prev=ptr;
		  n->nxt=ptr->nxt;
		  ptr->nxt->prev=n;
		  ptr->nxt=n;
		 }
		 else
		 {
		  printf("value is not found");
		 }
		 getch();
		break;
	  default :
		printf("\n Wrong Entry \n ");
	 }
	  printf("Do you want to countinou 1->yes and 0->no:-");
	  scanf("%d",&x);
   }while(x!=0);
}

void del()
{
     clrscr();
     int x;
     node *n;
     ptr=head;
       printf("\n 1-> First Node \n 2-> Last Node \n 3-> Middle Node \n");
       scanf("%d",&x);
       switch(x)
       {
	 case 1:
		clrscr();
		head=ptr->nxt;
		head->prev=NULL;
		n=ptr;
		free(n);
		printf("\n First Node Deleted ");
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
		printf("\n Last Node Deleted ");
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
		  printf("\n Value is found\n");
		  n=ptr->nxt;
		  ptr->nxt=ptr->nxt->nxt;
		  ptr->nxt->prev=ptr;
		  free(n);
		  printf("\n %d Value Deleted ",x);
		 }
		 else
		 {
		  printf("value is not found");
		 }
		 getch();
		break;
	  default :
		printf("\n Wrong Entry \n ");
	 }
}


void main()
{
 clrscr();
 create();
 clrscr();
 display();
 getch();
 int x;
  while(1)
  {
       clrscr();
       printf("\n 1-> DISPLAY \n 2->INSERT \n 3->DELETE \n 4->SEARCH \n 0->EXIT \n");
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
	  default :
		     printf("\n Wrong Entry \n ");
		     break;
	  case 0:
		printf("\n \n Thank You For Using Sonu'S Program ");
		getch();
		exit(0);
       }
  }
}
