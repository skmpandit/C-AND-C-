#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm,point[]={320,150,420,300,250,300,320,150};
 initgraph(&gd,&gm,"C\\TC\\BGI");
 drowpoly(4,point);
 getch();
 closegraph();
 return 0;
}