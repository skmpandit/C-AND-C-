#include<stdio.h>
#include<conio.h>
void main()
{
 int n=5,i,j,k,z=1;
 clrscr();
 for(i=1;i<=n;i++)
 {
   for(j=n-1;j>=i;j--)
   {
    printf(" ");
   }
   for(k=1;k<=z;k++)
   {
    printf("%d",z);
   }
   z+=2;
   printf("\n");
 }
 getch();
}
