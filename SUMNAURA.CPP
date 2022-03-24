#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s=0,i;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  s+=i;
 }
 printf("sum is %d",s);
 getch();
}