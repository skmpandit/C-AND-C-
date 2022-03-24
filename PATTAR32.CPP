#include<stdio.h>
#include<conio.h>
void main()
{
 int m=0,p_height=5,p_space=p_height-1,i,j,k;
 clrscr();
 for(i=0;i<p_height;i++)
 {
  for(j=p_space;j>i;j--)
  {
   printf(" ");
  }
  for(k=0;k<=m;k++)
  {
   printf("%c",m+65);
  }
  m+=2;
  printf("\n");
 }
 getch();
}