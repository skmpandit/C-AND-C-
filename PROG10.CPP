#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter the number:-");
 scanf("%d",&n);
 if(n>9&&n<=99)
 {
   printf("Its a two digit no");
 }
 else if(n>99&&n<=999)
 {
   printf("Its a three digit no");
 }
 else if(n>999&&n<=9999)
 {
   printf("Its a four digit no");
 }
 else if(n>9999&&n<=99999)
 {
   printf("Its a five digit no");
 }
 getch();
}