#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i;
 clrscr();
 printf("Enter the ten number:-\n");
 for(i=1;i<=10;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\nThe even number:-\n");
 for(i=1;i<=10;i++)
 {
  if(arr[i]%2==0)
  {
   printf("%d ",arr[i]);
  }
 }
 getch();
}