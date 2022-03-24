#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k,min=0,max=0;
 clrscr();
 printf("Enter the how many no:-");
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
 for(i=0;i<k;i++)
 {
  if(max<*x)
  {
   max=*x;
  }
  if(min>*x)
  {
   min=*x;
  }
 }
 printf("\n\nMax=%d And Min=%d",max,min);
 getch();
}