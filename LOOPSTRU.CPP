#include<stdio.h>
#include<conio.h>
struct stu
{
 char nm[15];
 char dept[10];
 int roll;
};
void main()
{
 stu x[2];
 int i;
 for(i=0;i<2;i++)
 {
 printf("\nEnter the name:-");
 scanf("%s",x[i].nm);
 printf("\nEnter the department:-");
 scanf("%s",x[i].dept);
 printf("\nEnter the roll number:-");
 scanf("%d",&x[i].roll);
 }
 for(i=0;i<2;i++)
 {
   printf("\nNAME=%s\nROLL=%d\nDEPRTMENT=%s",x[i].nm,x[i].roll,x[i].dept);
 }
 getch();
}