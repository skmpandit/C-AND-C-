#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,sum=0;
 clrscr();
 printf("Enter the last term:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  sum+=1/i*i;
 }
 printf("The sum of this series is %d",sum);
 getch();
}