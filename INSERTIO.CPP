#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
 int i,j,count,temp,arr[MAX];
 clrscr();
 printf("Enter the %d number:-",MAX);
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<MAX;i++)
 {
  temp=arr[i];
  j=i-1;
  while((temp<arr[j])&&(j>=0))
  {
   arr[j+1]=arr[j];
   j=j-1;
  }
  arr[j+1]=temp;
 }
 printf("Order of sorted elements:-\n");
 for(i=0;i<MAX;i++)
 {
  printf("%d ",arr[i]);
 }
 getch();
}
