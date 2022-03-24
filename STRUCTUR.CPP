#include<stdio.h>
#include<conio.h>
struct stu
{
  char nm[12];
  int roll;
  char dept[5];
};
void main()
{
 stu x,y;
 printf("\nData for 1st student:-");
 printf("\nEnter the name:-");
 scanf("%s",x.nm);
 printf("\nEnter the roll:-");
 scanf("%d",&x.roll);
 printf("\nEnter the department:-");
 scanf("%s",x.dept);
 printf("\nData for 2nd student:-");
 printf("\nEnter the name:-");
 scanf("%s",y.nm);
 printf("\nEnter the roll:-");
 scanf("%d",&y.roll);
 printf("\nEnter the department:-");
 scanf("%s",y.dept);
 printf("\nThe value of 1st student:-");
 printf("\nNAME=%s\nROLL=%d\nDEPRTMENT=%s",x.nm,x.roll,x.dept);
 printf("\nThe value of 2nd student:-");
 printf("\nNAME=%s\nROLL=%d\nDEPRTMENT=%s",y.nm,y.roll,y.dept);
 getch();
}