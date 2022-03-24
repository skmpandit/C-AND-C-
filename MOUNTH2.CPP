#include<stdio.h>
#include<conio.h>
void main()
{
 int mounth;
 clrscr();
 printf("Enter the mounth(1-12):-");
 scanf("%d",&mounth);
 if(mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12)
 {
   printf("31 days");
 }
 else if(mounth==4||mounth==6||mounth==9||mounth==11)
 {
  printf("30 days");
 }
 else if(mounth==2)
 {
  printf("28 or 29 days");
 }
 getch();
}