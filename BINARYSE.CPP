#include<stdio.h>
#include<conio.h>
#define MAX 9
void main()
{
 int arr[MAX],i,j,temp,s,first,last,middle,search;
 clrscr();
 printf("\nEnter the %d number:-\n",MAX);
 for(i=0;i<MAX;i++)
 {
  scanf("%d",arr[i]);
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
 printf("Enter the search value:-");
 scanf("%d",&search);
 first=0;
 last=MAX-1;
 middle=(first+last)/2;
 while(first<=last)
 {
  if(arr[middle]<search)
  {
   first=middle+1;
  }
  else if(arr[middle]==search)
  {
   printf("%d found at location %d",search,middle+1);
   break;
  }
  else
  {
   last=middle-1;
  }
  middle=(first+last)/2;
 }
 if(first>last)
 {
  printf("Not found! %d isn't present in the list",search);
 }                      6
 getch();
}