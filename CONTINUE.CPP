#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 clrscr();
 for(i=1;i<=10;i++)
 {
  if(i==6)
  {
   continue;
  }
  else
  {
  printf("%d ",i);
  }
 }
 getch();
}