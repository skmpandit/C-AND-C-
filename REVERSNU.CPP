#include<stdio.h>
#include<conio.h>
void main()
{
 int r,n,s=0;
 clrscr();
 printf("Enter the number:-");
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  n=n/10;
  s=s*10+r;
 }
 printf("Revers is %d",s);
 getch();
}