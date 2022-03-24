#include<stdio.h>
#include<conio.h>
void main()
{
 int n,temp,zeros,ones,i;
 clrscr();
 printf("Enter any number:-");
 scanf("%d",&n);
 temp=n;
 zeros=0;
 ones=1;
 for(i=0;i<n;i++)
 {
  if(temp&1)
  {
   ones++;
  }
  else
  {
   zeros++;
  }
  temp>>=1;
 }
  printf("Total number of zeros bit is %d (in %d byte integer representation)\n",zeros);
  printf("Total number of zeros bit is %d (in %d byte integer represntation)\n",ones);
  getch();
}