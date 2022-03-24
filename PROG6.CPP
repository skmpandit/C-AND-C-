#include<stdio.h>
#include<conio.h>
void main()
{
 int len,bre,ara,pr;
 clrscr();
 printf("Enter the length of rectangle:-");
 scanf("%d",&len);
 printf("Enter the breadth of rectangle:-");
 scanf("%d",&bre);
 ara=len*bre;
 pr=2*(len+bre);
 printf("Area of rectangle is %d\n",ara);
 printf("primeter of rectangle is %d",pr);
 getch();
}