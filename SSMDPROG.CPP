#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int x;
 int a,b,c;
 clrscr();
 while(1)
 {
  printf("Enter the sign for \n\t 1->+ \n\t 2->- \n\t 3->* \n\t 4->/ \n\t 0->exit\n");
  scanf("%d",&x);
  printf("\nEnter two number for opration:-\n");
  scanf("%d%d",&a,&b);
  switch(x)
  {
   case 1:
	  c=a+b;
	  printf("\n%d + %d=%d\n",a,b,c);
	  break;
   case 2:
	  c=a-b;
	  printf("\n%d - %d=%d\n",a,b,c);
	  break;
   case 3:
	  c=a*b;
	  printf("\n%d x %d=%d\n",a,b,c);
	  break;
   case 4:
	  c=a/b;
	  printf("\n%d / %d=%d\n",a,b,c);
	  break;
   case 0:
	  exit(0);
   default:
	  printf("\nWrong entry");
  }
 }
 getch();
}