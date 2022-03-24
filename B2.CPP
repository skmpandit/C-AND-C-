#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k,min=0,max=0;
 clrscr();
 printf("\nEnter the how many no.:-");
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
 max=*p;
 min=*p;
 printf("\n");
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
 }
  printf("Max=%d And Min=%d",max,min);
  getch();
}