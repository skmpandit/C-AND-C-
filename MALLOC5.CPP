#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,*a,i,k;
 clrscr();
 printf("\nEnter the how many number:-");
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
  printf("\n\nThe user given number:-\n");
  for(i=0;i<k;i++)
  {
   printf("%d ",*p);
   p++;
  }
  p=x;
  printf("\n\nEven number add five:-\n");
  for(i=0;i<k;i++)
  {
   if(*p%2==0)
   {
    *p=*p+5;
   }
   p++;
  }
  a=p;
  for(i=0;i<k;i++)
  {
   printf("%d ",*a);
   a++;
  }
  p=x;
  printf("\n\nOdd number add four:-\n");
  for(i=0;i<k;i++)
  {
   if(*p%2!=0)
   {
    *p=*p+4;
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