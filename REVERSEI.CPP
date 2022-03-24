#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a=0;
 clrscr();
 printf("Enter the number:-");
 scanf("%d",&n);
 while(n!=0)
 {
  a=a*10;
  a=a+n%10;
  n=n/10;
 }
 printf("Printing digit by least significant bit first is %d ",a);
 getch();
}