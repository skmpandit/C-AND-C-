#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float side,area;
 clrscr();
 printf("Enter the side of an equilateral triangel:-");
 scanf("%f",&side);
 area=(sqrt(3)/4)*(side*side);
 printf("Area of equilateral triangle=%f",area);
 getch();
}