#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s=0,i,x;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  s=s+x/i;
 }
 printf("sum is %d",s);
 getch();
}