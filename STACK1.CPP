#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
typedef struct stack
{
 int dt[MAX];
 int sp;
}st;
st s;

void push()
{
 if(s.sp==(MAX-1))
 {
  printf("\nStack is full.");
 }
 else
 {
  s.sp++;
  printf("\nEnter a value:-");
  scanf("%d",&s.dt[s.sp]);
  printf("\nValue pushed.");
 }
}
void pop()
{
 if(s.sp==-1)
 {
  printf("\nStack is empty.");
 }
 else
 {
  int temp=s.dt[s.sp];
  s.dt[s.sp]=0;
  s.sp--;
  printf("\n%d is poped",temp);
 }
}
void display()
{
 int i;
 printf("\nPushed value:-\n");
 for(i=s.sp;i>-1;i--)
 {
  printf("%d ",s.dt[i]);
 }
}
void main()
{
 int x;
 s.sp=-1;
 while(1)
 {
  clrscr();
  printf("\n1->push\n2->pop\n3->display\n0->exit\n");
  scanf("%d",&x);
  switch(x)
  {
   case 1:
	  clrscr();
	  push();
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
	  printf("\n Thank you for using sonu's program.");
	  getch();
	  exit(0);
   default:
	   printf("\nWrong entry.");

  }
 }
}