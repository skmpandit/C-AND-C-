#include<stdio.h>
#include<conio.h>
void main()
{
 int p_height=4,width=p_height*2-1,p_space=p_height-1,i,j,k;
 clrscr();
 for(i=p_height-1;i>=0;i--)
 {
  for(j=p_space;j>i;j--)
  {
   printf(" ");
  }
  for(k=1;k<=width;k++)
  {
   printf("%c",i+65);
  }
  width-=2;
  printf("\n");
 }
 getch();
}