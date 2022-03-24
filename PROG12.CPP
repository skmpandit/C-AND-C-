#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int x,n;
  clrscr();
  printf("Enter a number:-");
  scanf("%d",&n);
  if(n>9&&n<=99)
  {
    x=pow(n,2);
    printf("Its two digit number and %d is pow",x);
  }
  else if(n>99&&n<=999)
  {
   x=pow(n,3);
   printf("Its three digit number and %d is pow",x);
  }
  else if(n>999&&9999)
  {
   x=pow(n,4);
   printf("Its four digit number and %d is pow",x);
  }
  else
  {
   printf("Its out of range");
  }
  getch();
}