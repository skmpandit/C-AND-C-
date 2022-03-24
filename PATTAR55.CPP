#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int size=3,i,j;
 clrscr();
 for(i=size;i>=-size;i--)
 {
  for(j=abs(i);j<=size;j++)
  {
   printf("%c",j+65);
  }
  printf("\n");
 }
 getch();
}