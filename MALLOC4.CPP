#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,s=0,k;
 clrscr();
 printf("\nEnter the how many no.:-");
 scanf("%d",&k);
 p=(int*)malloc(k*sizeof(int));
 x=p;
 printf("\nEnter the value:-\n");
 for(i=0;i<k;i++)
 {
  scanf("%d",&*p);
  p++;
 }
 p=x;
 printf("\nThe user given number is :-\n");
 for(i=0;i<k;i++)
 {
  printf("%d ",*p);
  p++;
 }
 p=x;
 printf("\nThe odd number add five:-\n");
 for(i=0;i<k;i++)
 {
  if(*p%2!=0)
  {
   *p=*p+5;
  }
  p++;
 }
 p=x;
 for(i=0;i<k;i++)
 {
  printf("%d ",*p);
  p++;
 }
 getch();
}