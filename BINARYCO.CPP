#include<stdio.h>
#include<conio.h>
void main()
{
 int n,binaryval,decimalval=0,base=1,rem;
 clrscr();
 printf("Enter the binary number(0s and 1s):-");
 scanf("%d",&n);
 binaryval=n;
 while(n>0)
 {
  rem=n%10;
  decimalval=decimalval+rem*base;
  n=n/10;
  base=base*2;
 }
 printf("The binary is value:-%d\n",binaryval);
 printf("Its decimal equivalent value:-%d",decimalval);
 getch();
}