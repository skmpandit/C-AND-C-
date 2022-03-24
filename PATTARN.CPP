#include<stdio.h>
#include<conio.h>
void main()
{
 int wh=5,wl=4;
 int i,j,k;
 clrscr();
 for(i=1;i<=wh;i++)
 {
  for(j=1;j<=wl;j++)
  {
   for(k=1;k<=wh;k++)
   {
    if(i==k||i+k==wh+1)
     {
      printf(">>");
     }
     else
     {
      printf(" ");
     }
   }
  }
  printf("\n");
 }
 getch();
}