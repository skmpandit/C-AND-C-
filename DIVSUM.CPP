#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,i,s=0;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  s=s+1/i;
 }
 printf("sum is %d",s);
 getch();
}