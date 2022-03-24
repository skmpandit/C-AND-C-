#include<stdio.h>
#include<conio.h>
void main()
{
 int n=5,px=n,py=n,i,j;
 clrscr();
 for(i=1;i<=n;i++)
 {
  for(j=1;j<n*2;j++)
  {
   if(j>=px&&j<=py)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }
  px--;
  py++;
  printf("\n");
 }
 getch();
}