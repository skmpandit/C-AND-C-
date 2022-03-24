#include<stdio.h>
#include<conio.h>
void main()
{
 int num,n,newnum;
 clrscr();
 printf("Enter any number:-");
 scanf("%d",&num);
 printf("Enter nth bit to set(0-31):-");
 scanf("%d",&n);
 newnum=(1<<n)|num;
 printf("Bit set seccessfully.\n\n");
 printf("Number before setting %d bit %d (in decimal)\n",n,num);
 printf("Number after setting %d bit %d (in decimal)\n",n,newnum);
 getch();
}