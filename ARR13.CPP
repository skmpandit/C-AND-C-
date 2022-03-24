#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
 int arr[MAX],i,j,temp;
 clrscr();
 printf("\nEnter the %d number:-\n",MAX);
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\nArray before sort:-\n");
 for(i=0;i<MAX;i++)
 {
  printf("%d ",arr[i]);
 }
 for(i=0;i<MAX;i++)
 {
  for(j=0;j<(MAX-1-i);j++)
  {
   if(arr[j]<arr[j+1])
   {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
   }
  }
 }
 printf("\nArray after sort:-\n");
 for(i=0;i<MAX;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
}