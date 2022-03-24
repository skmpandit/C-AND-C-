#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int i,n;
 clrscr();
 float fact=1.0,sum=0.0;
 printf("Enter the number up to which you want calculate the sum:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  fact*=i;
  sum+=i/fact;
 }
 printf("The result is %f",sum);
 getch();
}