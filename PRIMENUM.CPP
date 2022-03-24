#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,start,end,isprime,sum=0;
 clrscr();
 printf("Enter the lower limit:-");
 scanf("%d",&start);
 printf("Enter the upper limit:-");
 scanf("%d",&end);
 for(i=start;i<=end;i++)
 {
  isprime=1;
  for(j=2;j<=i;j++)
  {
   if(i%j==0)
   {
   isprime=0;
   break;
   }
  }
 if(isprime==1)
 {
  sum=+i;
 }
}
 printf("Sum of all primr number between %d and %d =%d ",start,end,sum);
 getch();
}