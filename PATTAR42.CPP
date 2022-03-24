#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n=4,z=1,i,k,j;
 clrscr();
 for(i=0;i<n;i++)
 {
  for(j=n-1;j>=i;j--)
  {
   printf(" ");
  }
  for(k=i;k>=-i;k--)
  {
   printf("%c",i-abs(k)+65);
  }
  z+=2;
  printf("\n");
 }
 getch();
}