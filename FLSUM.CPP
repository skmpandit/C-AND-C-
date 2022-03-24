#include<stdio.h>
#include<conio.h>
void main()
{
 int x,l,f,s;
 clrscr();
 printf("Enter the four digit number:-");
 scanf("%d",&x);
 if(x>999&&x<=9999)
 {
  l=x%10;
  f=x/1000;
  s=f+l;
  printf("Its four digit number and first and last digit sum is %d",s);
 }
 else
 {
  printf("Its not four digit number please enter the four digit number");
 }
 getch();
}
