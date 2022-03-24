#include<stdio.h>
#include<conio.h>
void main()
{
 int x;
 clrscr();
 printf("Enter the 1 to 7 for days:-");
 scanf("%d",&x);
 switch(x)
 {
  case 1:
	 printf("Sunday\n");
	 break;
  case 2:
	 printf("Monday\n");
	 break;
  case 3:
	 printf("Tuesday\n");
	 break;
  case 4:
	 printf("Wednesday\n");
	 break;
  case 5:
	 printf("Thursday\n");
	 break;
  case 6:
	 printf("Friday\n");
	 break;
  case 7:
	 printf("Saturday\n");
	 break;
  default:
	 printf("Wrong entry");
 }
 getch();
}