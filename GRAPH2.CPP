#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C\\TC\\BGI");
 bar3d(100,100,200,200,30,2);
 getch();
 closegraph();
 return 0;
}
