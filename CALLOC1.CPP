#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void main()
{
  int *ptr,n=5,i;
  clrscr();
  printf("Enter number of element:-%d\n",n);
  ptr=(int*)calloc(n,sizeof(int));
  if(ptr==NULL)
  {
   printf("Memory not allocated.\n");
   exit(0);
  }
  else
  {
   printf("Memory successfully allocated using calloc.\n");
   for(i=0;i<n;i++)
   {
    ptr[i]=i+1;
   }
   printf("The element of the array are:-\n");
   for(i=0;i<n;i++)
   {
    printf("%d ",ptr[i]);
   }
  }
  getch();
}