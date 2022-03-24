#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i,max,min;                      uu
 clrscr();
 printf("Enter the ten number:-\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }                                                                                                                      jjj
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
 }
 printf("The max is %d and The min is %d",max,min);
 getch();
}