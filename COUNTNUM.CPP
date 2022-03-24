#include<stdio.h>
#include<conio.h>
void main()
{
 int n,c=0;
 clrscr();
 printf("Enter the number:-");
 scanf("%d",&n);
 while(n>0)
 {
  n=n/10;
  c++;
 }
 printf("Number of digit %d",c);
 getch();
}