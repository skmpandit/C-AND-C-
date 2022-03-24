#include<stdio.h>
#include<conio.h>
void main()
{
 int x;
 clrscr();
 printf("Enter the 1 to 7 for days:-");
 scanf("%d",&x);
 if(x==1)
 {
  printf("Sunday\n");
 }
 else if(x==2)
 {
  printf("Monday\n");
 }
 else if(x==3)
 {
  printf("Tuesday\n");
 }
 else if(x==4)
 {
  printf("Wednesday\n");
 }
 else if(x==5)
 {
  printf("Thursday\n");
 }
 else if(x==6)
 {
  printf("Friday\n");
 }
 else if(x==7)
 {
  printf("Saturday\n");
 }
 else
 {
  printf("Wrong entry please enter the 1 to 7");
 }
 getch();
}