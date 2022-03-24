#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i,max,min;
 float div=0;
 clrscr();
 printf("Enter the ten number:-\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The division max and min number:-\n");
 max=arr[0];
 min=arr[0];
 for(i=0;i<10;i++)
 {
  if(arr[i]>max)
  {
   max=arr[i];
  }
  if(arr[i]<min)
  {
   min=arr[i];
  }
  div=max/min;
 }
 printf("%d/%d=%f",max,min,div);
 getch();
}
