#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
 int i,j,temp,arr[MAX];
 clrscr();
 printf("Enter the %d number:-\n",MAX);
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<MAX;i++)
 {
  for(j=i+1;j<MAX;j++)
  {
   if(arr[i]>arr[j])
   {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
 printf("Sorted elements:-\n");
 for(i=0;i<MAX;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
}