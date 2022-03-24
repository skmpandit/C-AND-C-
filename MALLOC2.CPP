#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k,s=0;
 clrscr();
 printf("\nEnter the how many digit you want to print;-\n");
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
 printf("The user given number:-\n");
 for(i=0;i<k;i++)
 {
  printf("%d ",*p);
  s+=*p;
  p++;
 }
 printf("\nThe sumission of user geven number:-%d",s);
 getch();
}