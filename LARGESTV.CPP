#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,t;
 clrscr();
 printf("Enter three number:-\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
  if(a>c)
  {
   t=a;
   printf("The largest value is %d",t);
  }
  else
  {
   t=c;
   printf("The largest value is %d ",t);
  }
 }
   if(b>c)
   {
    t=b;
    printf("The largest value is %d",t);
   }
   else
   {
    t=c;
    printf("The largest value is %d ",t);
   }
   getch();
  }
