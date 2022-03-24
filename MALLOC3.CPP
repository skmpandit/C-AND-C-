#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
  int *p,*x,i,k;
  clrscr();
  printf("\nEnter the how many number:-");
  scanf("%d",&k);
  p=(int*)malloc(k*sizeof(int));
  x=p;
  printf("\nEnter the value:-\n");
  for(i=0;i<k;i++)
  {
   scanf("%d",&(*p));
   p++;
  }
  printf("\n");
  p=x;
  printf("The user given number:-\n");
  for(i=0;i<k;i++)
  {
   printf("%d ",*p);
   p++;
  }
  p=x;
  printf("\nThe even number add five:-");
  for(i=0;i<k;i++)
  {
   if(*p%2==0)
   {
     *p=*p+5;
   }
   p++;
  }
  printf("\n");
  p=x;
  for(i=0;i<k;i++)
  {
   printf("%d ",*p);
   p++;
  }
  getch();
}