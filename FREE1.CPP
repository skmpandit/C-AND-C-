#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void main()
{
 int *ptr,*ptr1,n=5,i;
 clrscr();
 printf("Enter number of element:-%d",n);
 ptr=(int*)malloc(n*sizeof(int));
 ptr1=(int*)calloc(n,sizeof(int));
 if(ptr==NULL||ptr1==NULL)
 {
  printf("\nMemory not allocated.\n");
  exit(0);
 }
 else
 {
  printf("\nMemory successfully allocated using malloc.\n");
  free(ptr);
  printf("Malloc memory successfully freed.\n");
  printf("Memory successfully allocated using calloc.\n");
  free(ptr1);
  printf("Malloc memory successfully freed.\n");
 }
 getch();
}