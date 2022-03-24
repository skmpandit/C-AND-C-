#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,z=1,n=5;
 clrscr();
 for(i=1;i<=n;i++)
 {
  for(j=n-1;j>=i;j--)
  {
   printf(" ");
  }
  for(k=1;k<=z;k++)
  {
   printf("%d",j);
  }
  z+=2;
  printf("\n");
 }
 getch();
}