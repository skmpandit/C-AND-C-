#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C\\TC\\BDI");
 arc(300,200,0,360,100);
 getch();
 closegraph();
 return 0;
}