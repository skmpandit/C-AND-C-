#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k;
 clrscr();
 printf("\n Enter the how many number:-");
 scanf("%d",&k);
 p=(int*)malloc(k*sizeof(int));
 x=p;
 printf("Enter the value:-\n");
 for(i=0;i<k;i++)
 {
  scanf("%d",&(*p));
  p++;
 }
 p=x;
 printf("\nThe user given number:-\n");
 for(i=0;i<k;i++)
 {
  printf("%d ",*p);
  p++;
 }
 getch();
}