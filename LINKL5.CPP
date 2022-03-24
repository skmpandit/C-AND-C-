#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*x,i,k,s=0,sum=0;
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
 printf("\nUser given number:-\n");
 for(i=0;i<k;i++)
 {
  printf("%d ",*p);
  p++;
 }
 p=x;
 for(i=0;i<k;i++)
 {
  s=s+*p;
  if(*p%2==0)
  {
   *p=*p+5;
  }
  p++;
 }
 printf("\nThe sum of user given number=%d",s);
 p=x;
 printf("\n\nThe only even number add five:-\n");
 for(i=0;i<k;i++)
 {
  sum+=*p;
  printf("%d ",*p);
  p++;
 }
 printf("\nThe addition of even number:-%d",sum);
 getch();
}