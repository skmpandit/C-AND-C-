#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n=2;
 char str[40];
 FILE *fptr=fopen("samle.txt","w");
 if(fptr==NULL)
 {
  printf("Could not open file");
 }
 for(i=0;i<n;i++)
 {
  puts("Enter a name");
  gets(str);
  fprintf(fptr,"%d.%s\n",i,str);
 }
 fclose(fptr);
 getch();
}