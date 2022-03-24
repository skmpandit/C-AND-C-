#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i,max,min,mult=0;
 clrscr();
 printf("Enter the ten number:-\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The multiplication of max and min munber:-\n");
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
  mult=max*min;
 }
 printf("%dx%d=%d",max,min,mult);
 getch();
}