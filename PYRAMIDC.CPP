#include<stdio.h>
#include<conio.h>
void main()
{
 char x;
 int j,i;
 clrscr();
 for(i=1;i<=5;i++)
 {
  x='A';
  for(j=1;j<=i;j++)
  {
   printf("%c",x);
   x++;
  }
  printf("\n");
 }
 getch();
}