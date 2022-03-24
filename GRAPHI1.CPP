#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C\\TC\\BDI");
 arc(100,100,200,200);
 getch();
 closegraph();
 return 0;
}