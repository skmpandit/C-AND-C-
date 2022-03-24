#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
void main()
{
 int *ptr;
 int i,n=5;
 clrscr();
 printf("Enter number of elements:-%d",n);
 ptr=(int*)malloc(n*sizeof(int));
 if(ptr==NULL)
 {
  printf("\nMemory not allocated.\n");
  exit(0);
 }
 else
 {
  printf("\nMemort successfully allocated using malloc.\n");
  for(i=0;i<n;i++)
  {
   ptr[i]=i+1;
  }
  printf("The elements of the array are:-\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",ptr[i]);
  }
 }
  getch();
}