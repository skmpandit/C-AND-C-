#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,arr[10],value,f;
 clrscr();
 printf("Enter the 10 number:-\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\nEnter the search value:-");
 scanf("%d",&value);
 for(i=0;i<10;i++)
 {
  if(arr[i]==value)
  {
   f=1;
   break;
  }
 }
 if(f==1)
 {
  printf("\nThe value is found");
 }
 else
 {
  printf("\nThe value is not found");
 }
 getch();
}