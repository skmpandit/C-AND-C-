#include<stdio.h>
#include<conio.h>
void main()
{
 int mounth;
 clrscr();
 printf("Enter the mounth number(1-12):-");
 scanf("%d",&mounth);
 if(mounth==1)
 {
  printf("31 days");
 }
 else if(mounth==2)
 {
  printf("28 or 29 days");
 }
 else if(mounth==3)
 {
  printf("31 days");
 }
 else if(mounth==4)
 {
  printf("30 days");
 }
 else if(mounth==5)
 {
  printf("31 days");
 }
 else if(mounth==6)
 {
  printf("30 days");
 }
 else if(mounth==7)
 {
  printf("31 days");
 }
 else if(mounth==8)
 {
  printf("31 days");
 }
 else if(mounth==9)
 {
  printf("30 days");
 }
 else if(mounth==10)
 {
  printf("31 days");
 }
 else if(mounth==11)
 {
  printf("30 days");
 }
 else if(mounth==12)
 {
  printf("31 days");
 }
 else
 {
  printf("Invalid input! please enter mounth number between(1-12)");
 }
 getch();
}