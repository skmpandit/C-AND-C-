#include<stdio.h>
#include<conio.h>
void main()
{
 int n,m=0,i;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  m=m*i;
 }
 printf("Multiplication is %d",m);
 getch();
}