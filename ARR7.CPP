#include<stdio.h>
#include<conio.h>
void main()
{
 int i,arr[10],sum=0;
 clrscr();
 printf("Enter the ten number:-\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The sum of even number:-\n");
 for(i=0;i<10;i++)
 {
  if(arr[i]%2==0)
  {
   sum+=arr[i];
   printf("%d+",arr[i]);
  }
 }
 printf("=%d",sum);
 getch();
}