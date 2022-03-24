#include<stdio.h>
#include<conio.h>
void main()
{
 int j,i,k='A';
 clrscr();
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
  {
   if(j<=6-i)
   {
    printf("%c",k);
    k++;
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
 getch();
}