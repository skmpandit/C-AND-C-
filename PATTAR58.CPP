#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int size=3,i,j,k;
 clrscr();
 for(i=size;i>=-size;i--)
 {
  for(j=1;j<=abs(i);j++)
  {
   printf(" ");
  }
  for(k=abs(i);k<=size;k++)
  {
   printf("%d",k);
  }
  printf("\n");
 }
 getch();
}