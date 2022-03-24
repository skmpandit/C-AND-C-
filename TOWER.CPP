#include<stdio.h>
#include<conio.h>
void tower (int n, char sourcepole, char destinationpole, char auxiliarypole)
{
 if(0==n)
 {
  return;
 }
 tower(n-1,sourcepole, auxiliarypole,destinationpole);
 printf("Move the disk %d from %c to %c\n",n,sourcepole,destinationpole);
 tower(n-1,auxiliarypole,destinationpole,sourcepole);
}
int main()
{
tower(3,'s','d','a');
getch();
}