#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int size=3,j,i;
 clrscr();
 for(i=size;i>=-size;i--)
 {
  for(j=size;j>=abs(i);j--)
  {
   printf("%c",j+65);
  }
  printf("\n");
 }
 getch();
}