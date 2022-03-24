#include<stdio.h>
#include<conio.h>
void main()
{
 int n=5,z=1,i,k,j;
 clrscr();
 for(i=1;i<=n;i++)
 {
  for(j=n-1;j>=i;j--)
  {
   printf(" ");
  }
  for(k=1;k<=z;k++)
  {
   printf("%d",k);
  }
  z+=2;
  printf("\n");
 }
 getch();
}