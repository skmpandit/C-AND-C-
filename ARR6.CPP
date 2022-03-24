#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10],i,n,s=0;
 clrscr();
 printf("Enter the ten number:-\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The sum of number:-\n");
 for(i=0;i<10;i++)
 {
  s+=arr[i];
  printf("%d+",arr[i]);
 }
 printf("=%d",s);
 getch();
}
