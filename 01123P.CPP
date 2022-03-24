#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1,c,i,n;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 printf("%d %d",a,b);
 for(i=3;i<=n;i++)
 {
   c=a+b;
   printf(" %d ",c);
   a=b