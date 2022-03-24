#include<stdio.h>
#include<conio.h>
void main()
{
 int n,num,bitstatus;
 clrscr();
 printf("Enter any number:-");
 scanf("%d",&num);
 printf("Enter nth bit to check(0-31):-");
 scanf("%d",&n);
 bitstatus=(num>>n)&1;
 printf("The %d bit is set to %d ",n,bitstatus);
 getch();
}