#include<stdio.h>
#include<conio.h>
struct point
{
 int x,y,z;
};
void main()
{
 clrscr();
 struct point p1={0,1,2};
 struct point p2={20};
 printf("x=%d ,y=%d ,z=%d\n",p1.x,p1.y,p1.z);
 printf("x=%d",p2.x);
 getch();
}