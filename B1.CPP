#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 float s=0;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  s=s+1.0/i;
 }
 printf("sum =%f",s);
 getch();
}