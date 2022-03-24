#include<stdio.h>
#include<conio.h>
void main()
{
 int k=1,w=2,i,n;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf(" %d ",k);
  k=k+w;
  w=w+1;
 }
 getch();
}