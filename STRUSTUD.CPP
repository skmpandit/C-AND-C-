#include<stdio.h>
#include<conio.h>
struct employee
{
 char name[30];
 int sal;
};
struct employee emp[5];
int i,j;
void ask()
{
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("Enter the %dst Employee record:-",i+1);
  printf("Enter Employee name:-");
  scanf("%s",emp[i].name);
  printf("Enter the Salary:-");
  scanf("%d",&emp[i].sal);
 }
 printf("\n\nDisplaying the employee record:-");
 for(i=0;i<3;i++)
 {
  printf("Enployee name is %s",emp[i].name);
  printf("Slary is %d",emp[i].sal);
 }
 getch();
}
void main()
{
 ask();
}
