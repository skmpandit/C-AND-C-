#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
void main()
{
 int i,j,pivot,first,last,temp,arr[MAX];
 clrscr();
 printf("Enter the %d number:-\n");
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 if(first<last)
 {
  pivot=first;
  i=first;
  j=last;
  while(i<j)
  {
   while(arr[i]<=arr[pivot]&&i<last)
   {
    i++;
   }
   while(arr[j]>arr[pivot])
   {
    j--;
   }
   if(i<j)
   {
    temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;
    quickSort(arr,first,j-1);
    quickSort(arr,j+1,last);
   }
  }
 }
 printf("Sorted the array:-");
 for(i=0;i<MAX;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
}