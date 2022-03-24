#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   arc(100, 100, 0, 360, 50);

   getch();
   closegraph();
   return 0;
}