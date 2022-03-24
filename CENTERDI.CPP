#include<stdio.h>
#include<conio.h>
void main()
{
 int n,w,c;
 clrscr();
 printf("Enter the fove digit number:-");
 scanf("%d",&n);
 if(n>9999&&n<=99999)
 {
  w=n/100;
  c=w%10;
  printf("Its five digit number and center digit number is %d",c);
 }
 else
 {
  printf("Its not five digit number please enter the five digit number");
 }
 getch();
}