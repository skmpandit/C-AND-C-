#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=1;i<=10;i++)
 {
  for(j=1;j<=10;j++)
  {
  printf("%dX%d=%d\n",i,j,i*j);
  }
  printf("\n");
 }
 getch();
}