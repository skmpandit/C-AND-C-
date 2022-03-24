#include<stdio.h>
#include<conio.h>
void main()
{
 int j,i,k=0;
 clrscr();
 for(i=1;i<=9;i++)
 {
  i<6?k++:k--;
  for(j=1;j<=5;j++)
  {
   if(j<=i&&j<=10-i)
   {
    printf("*");
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