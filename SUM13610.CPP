#include<stdio.h>
#include<conio.h>
void main()
{
 int n,s=0,k=1,w=2,i;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  s=s+k;
  k=k+w;
  w=w+1;
 }
 printf("sum is %d",s);
 getch();
}