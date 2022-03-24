#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k,max,min,mul;
 clrscr();
 printf("Enter the how many digit want to print:-");
 scanf("%d",&k);
 p=(int*)malloc(sizeof(int));
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
  mul=max*min;
 }
 printf("The max number is %d and min number is %d",max,min);
 printf("\nThe multiplecation of max and min number is %d",mul);
 getch();
}