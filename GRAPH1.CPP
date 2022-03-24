#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C\\TC\\BGI");
 bar(100,100,0,0);
 getch();
 closegraph();
 return 0;
}