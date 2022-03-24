#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
void add()
void sub()
void multe()
void dev()
 {
  int x;
  clrscr();
  while(1)
  {
   clrscr();
   printf("Enter the sign for \n\t 1:- + \n\t 2:- - \n\t 3:- X \n\t 4:- / \n\t 0:- exit \n");
   scanf("%d",&x);
   switch(x)
   {
    case 1:
	   add();
	   break;
    case 2:
	   sub();
	   break;
    case 3:
	   multe();
	   break;
    case 4:
	   dev();
	   break;
    case 0:
	   exit(0);
    default:
	   printf("\n Wrong entry");
   }
   void add()
   {
    int a,b,c;
    clrscr();
    printf("\nEnter two number for opration:-");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n%d + %d=%d\n",a,b,c);
    getch();
   }
   void sub()
   {
    int a,b,c;
    clrscr();
    printf("\nEnter two number for opration:-");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("\n%d - %d=%d\n",a,b,c);
    getch();
   }
   void multe()
   {
    int a,b,c;
    clrscr();
    printf("\nEnter two number for opration:-");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n%d x %d=%d",a,b,c);
    getch();
   }
   void dev()
   {
    int a,b,c;
    clrscr();
    printf("\nEnter two numbet for opration:-");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("\n%d / %d=%d",a,b,c);
    getch();
   }
  }
  getch();
 }
