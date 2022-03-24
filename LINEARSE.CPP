#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
 int i,data,arr[MAX];
 clrscr();
 printf("Enter the %d number :-\n",MAX);
 for(i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the search value:-");
 scanf("%d",&data);
 for(i=0;i<MAX;i++)
 {
  if(i==data)
  {
   printf("Element is found at index %d",i);
   break;
  }
 }
 if(i==MAX)
 {
  printf("Element is not found");
 }
 getch();
}