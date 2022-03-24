#include<stdio.h>
#include<conio.h>
struct point
{
 int x,y;
};
void main()
{
 int z;
 clrscr();
 struct point p1={55,5};
 printf("x=%d, y=%d, z=%d",p1.x,p1.y,p1.x+p1.y);
 getch();
}