#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
 int id;
 char name[50];
}e1;
void main()
{
 clrscr();
 e1.id=101;
 strcpy(e1.name,"sonu kumar mahto");
 printf("employee 1 id:-%d %u\n",e1.id);
 printf("employee 1 name:-%s",e1.name);
 getch();
}