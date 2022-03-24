#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter any number:-");
 scanf("%d",&n);
 if(n&1)
 {
  printf("Least signficant bit(LSB) of %d set (1)",n);
 }
 else
 {
  printf("Least signficant bit(LSB) of %d unset (0)",n);
 }
 getch();
}