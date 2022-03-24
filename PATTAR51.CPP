#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int size=3,i,j;
 clrscr();
 for(i=size;i>=-size;i--)
 {
  for(j=size;j>=abs(i);j--)
  {
   printf("*");
  }
  printf("\n");
 }
 getch();
}