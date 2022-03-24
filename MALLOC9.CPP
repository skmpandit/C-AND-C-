#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k,max,min,sum=0;
 clrscr();
 printf("Enter the how many digit you want:-");
 scanf("%d",&k);
 p=(int*)malloc(k*sizeof(int));
 x=p;
 printf("Enter the value:-\n");
 for(i=0;i<k;i++)
 {
  scanf("%d",&*p);
  p++;
 }
 p=x;
 printf("\nUser given number:-\n");
 for(i=0;i<k;i++)
 {
  printf("%d ",*p);
  p++;
 }
 p=x;
 max=*p;
 min=*p;
 for(i=0;i<k;i++)
 {
  if(max<*p)
  {
   max=*p;
  }
  if(min>*p)
  {
   min=*p;
  }
  p++;
  sum=max+min;
 }
 printf("\nThe Max number is %d And Min number is %d",max,min);
 printf("\nThe summision of max and min number:-%d",sum);
 getch();
}