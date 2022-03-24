#include<stdio.h>
#include<conio.h>
void main()
{
 int x,s=0,r,n;
 clrscr();
 printf("Enter the number:-");
 scanf("%d",&n);
 x=n;
 while(n>0)
 {
  r=n%10;
  n=n/10;
  s+=r*r*r;
 }
 if(s==x)
 {
  printf("Its a Amstronge number");
 }
 else
 {
  printf("Its not Amstronge number");
 }
 getch();
}