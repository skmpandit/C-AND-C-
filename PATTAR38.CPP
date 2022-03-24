#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n=5,z=1,l=1,i,j,k;
 clrscr();
 for(i=0;i<n;i++)
 {
  for(j=4;j>i;j--)
  {
   printf(" ");
  }
  for(k=1;k<=z;k++)
  {
   printf("%c",abs(k-l)+65);
  }
  l++;
  z+=2;
  printf("\n");
 }
 getch();
}